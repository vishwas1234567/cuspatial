/*
 * Copyright (c) 2019, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

typedef struct gdf_column_ gdf_column; // forward declaration

namespace cuspatial {

/**
 * @brief Find all points (x,y) that fall within a query window (x1, y1, x2, y2)

 * @param[in] x1: x-coordinate of lower-left corner of the query window
 * @param[in] y1: y-coordinate of lower-left corner of the query window
 * @param[in] x2: x-coordinate of top-right corner of the query window
 * @param[in] y2: y-coordinate of top-right corner of the query window
 * @param[in] in_x: x coordinates of points to be queried
 * @param[in] in_y: y coordinates of points to be queried

 * @returns pair of gdf_columns of query results of in_x and in_y columns.
 */

 std::pair<gdf_column,gdf_column> spatial_window_points(const gdf_scalar x1,
                                                        const gdf_scalar y1,
                                                        const gdf_scalar x2,
                                                        const gdf_scalar y2,
                                                        const gdf_column& in_x,
                                                        const gdf_column& in_y);

}  // namespace cuspatial
