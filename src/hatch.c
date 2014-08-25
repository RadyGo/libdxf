/*!
 * \file hatch.c
 *
 * \author Copyright (C) 2008 ... 2014 by Bert Timmerman <bert.timmerman@xs4all.nl>.
 *
 * \brief Functions for a DXF hatch entity (\c HATCH).
 *
 * \warning The hatch entity requires AutoCAD version R14 or higher.\n
 *
 * \htmlinclude "../doc/hatch.html"
 *
 * <hr>
 * <h1><b>Copyright Notices.</b></h1>\n
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.\n\n
 * This program is distributed in the hope that it will be useful, but
 * <b>WITHOUT ANY WARRANTY</b>; without even the implied warranty of
 * <b>MERCHANTABILITY</b> or <b>FITNESS FOR A PARTICULAR PURPOSE</b>.\n
 * See the GNU General Public License for more details.\n\n
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to:\n
 * Free Software Foundation, Inc.,\n
 * 59 Temple Place,\n
 * Suite 330,\n
 * Boston,\n
 * MA 02111 USA.\n
 * \n
 * Drawing eXchange Format (DXF) is a defacto industry standard for the
 * exchange of drawing files between various Computer Aided Drafting
 * programs.\n
 * DXF is an industry standard designed by Autodesk(TM).\n
 * For more details see http://www.autodesk.com.
 * <hr>
 */


#include "hatch.h"


/*!
 * \brief Allocate memory for a DXF \c HATCH.
 *
 * Fill the memory contents with zeros.
 */
DxfHatch *
dxf_hatch_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatch *hatch = NULL;
        size_t size;

        size = sizeof (DxfHatch);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((hatch = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatch struct.\n")),
                  __FUNCTION__);
                hatch = NULL;
        }
        else
        {
                memset (hatch, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (hatch);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH pattern.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchPattern *
dxf_hatch_pattern_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchPattern *pattern = NULL;
        size_t size;

        size = sizeof (DxfHatchPattern);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((pattern = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchPatternSeedpoint struct.\n")),
                  __FUNCTION__);
                pattern = NULL;
        }
        else
        {
                memset (pattern, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (pattern);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH pattern definition line.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchPatternDefLine *
dxf_hatch_pattern_def_line_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchPatternDefLine *line = NULL;
        size_t size;

        size = sizeof (DxfHatchPatternDefLine);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((line = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchPatternDefLine struct.\n")),
                  __FUNCTION__);
                line = NULL;
        }
        else
        {
                memset (line, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (line);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH pattern seedpoint.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchPatternSeedPoint *
dxf_hatch_pattern_seedpoint_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchPatternSeedPoint *seedpoint = NULL;
        size_t size;

        size = sizeof (DxfHatchPatternSeedPoint);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((seedpoint = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchPatternSeedpoint struct.\n")),
                  __FUNCTION__);
                seedpoint = NULL;
        }
        else
        {
                memset (seedpoint, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (seedpoint);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPath *
dxf_hatch_boundary_path_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPath *path = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPath);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((path = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPath struct.\n")),
                  __FUNCTION__);
                path = NULL;
        }
        else
        {
                memset (path, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (path);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path polyline.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPathPolyline *
dxf_hatch_boundary_path_polyline_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathPolyline *polyline = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPathPolyline);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((polyline = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathPolyline struct.\n")),
                  __FUNCTION__);
                polyline = NULL;
        }
        else
        {
                memset (polyline, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (polyline);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path polyline
 * vertex.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPathPolylineVertex *
dxf_hatch_boundary_path_polyline_vertex_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathPolylineVertex *vertex = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPathPolylineVertex);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((vertex = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathPolylineVertex struct.\n")),
                  __FUNCTION__);
                vertex = NULL;
        }
        else
        {
                memset (vertex, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (vertex);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path edge.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPathEdge *
dxf_hatch_boundary_path_edge_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathEdge *edge = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPathEdge);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((edge = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdge struct.\n")),
                  __FUNCTION__);
                edge = NULL;
        }
        else
        {
                memset (edge, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (edge);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path edge arc.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPathEdgeArc *
dxf_hatch_boundary_path_edge_arc_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathEdgeArc *arc = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPathEdgeArc);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((arc = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeArc struct.\n")),
                  __FUNCTION__);
                arc = NULL;
        }
        else
        {
                memset (arc, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (arc);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path edge ellipse.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPathEdgeEllipse *
dxf_hatch_boundary_path_edge_ellipse_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathEdgeEllipse *ellipse = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPathEdgeEllipse);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((ellipse = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeEllipse struct.\n")),
                  __FUNCTION__);
                ellipse = NULL;
        }
        else
        {
                memset (ellipse, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (ellipse);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path edge line.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPathEdgeLine *
dxf_hatch_boundary_path_edge_line_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathEdgeLine *line = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPathEdgeLine);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((line = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeLine struct.\n")),
                  __FUNCTION__);
                line = NULL;
        }
        else
        {
                memset (line, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (line);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path edge spline.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPathEdgeSpline *
dxf_hatch_boundary_path_edge_spline_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathEdgeSpline *spline = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPathEdgeSpline);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((spline = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeSpline struct.\n")),
                  __FUNCTION__);
                spline = NULL;
        }
        else
        {
                memset (spline, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (spline);
}


/*!
 * \brief Allocate memory for a DXF \c HATCH boundary path edge spline
 * control point.
 *
 * Fill the memory contents with zeros.
 */
DxfHatchBoundaryPathEdgeSplineCp *
dxf_hatch_boundary_path_edge_spline_control_point_new ()
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathEdgeSplineCp *control_point = NULL;
        size_t size;

        size = sizeof (DxfHatchBoundaryPathEdgeSplineCp);
        /* avoid malloc of 0 bytes */
        if (size == 0) size = 1;
        if ((control_point = malloc (size)) == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeSplineCp struct.\n")),
                  __FUNCTION__);
                control_point = NULL;
        }
        else
        {
                memset (control_point, 0, size);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (control_point);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatch *
dxf_hatch_init
(
        DxfHatch *hatch
                /*!< DXF hatch entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        hatch = dxf_hatch_new ();
        if (hatch == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatch struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        hatch->id_code = 0;
        hatch->linetype = strdup (DXF_DEFAULT_LINETYPE);
        hatch->layer = strdup (DXF_DEFAULT_LAYER);
        hatch->x0 = 0.0;
        hatch->y0 = 0.0;
        hatch->z0 = 0.0;
        hatch->extr_x0 = 0.0;
        hatch->extr_y0 = 0.0;
        hatch->extr_z0 = 0.0;
        hatch->thickness = 0.0;
        hatch->pattern_scale = 1.0;
        hatch->pixel_size = 1.0;
        hatch->pattern_angle = 0.0;
        hatch->color = DXF_COLOR_BYLAYER;
        hatch->paperspace = DXF_MODELSPACE;
        hatch->solid_fill = 0;
        hatch->associative = 1;
        hatch->hatch_style = 0;
        hatch->pattern_style = 0;
        hatch->pattern_double = 0;
        hatch->number_of_pattern_def_lines = 0;
        hatch->def_lines = NULL;
        hatch->number_of_boundary_paths = 0;
        hatch->paths = NULL;
        hatch->number_of_seed_points = 0;
        hatch->seed_points = NULL;
        hatch->acad_version_number = 0;
        hatch->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (hatch);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * pattern entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchPattern *
dxf_hatch_pattern_init
(
        DxfHatchPattern *pattern
                /*!< DXF hatch pattern entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        pattern = dxf_hatch_pattern_new ();
        if (pattern == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchPattern struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        pattern->id_code = 0;
        pattern->def_lines = 0;
        pattern->lines = NULL;
/*! \todo correction in:
        pattern->length = 0.0;
*/
        pattern->number_of_seed_points = 0;
        pattern->seed_points = NULL;
        pattern->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (pattern);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * pattern definition line entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchPatternDefLine *
dxf_hatch_pattern_def_line_init
(
        DxfHatchPatternDefLine *line
                /*!< DXF hatch pattern definition line entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        line = dxf_hatch_pattern_def_line_new ();
        if (line == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchPatternDefLine struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        line->id_code = 0;
        line->angle = 0.0;
        line->x0 = 0.0;
        line->y0 = 0.0;
        line->x1 = 0.0;
        line->y1 = 0.0;
        line->dash_items = DXF_MAX_HATCH_PATTERN_DEF_LINE_DASH_ITEMS;
        for (i = 0; i >= DXF_MAX_HATCH_PATTERN_DEF_LINE_DASH_ITEMS; i++)
        {
                line->dash_length[i] = 0.0;
        }
        line->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (line);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * pattern seedpoint entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchPatternSeedPoint *
dxf_hatch_pattern_seedpoint_init
(
        DxfHatchPatternSeedPoint *seedpoint
                /*!< DXF hatch pattern seedpoint entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        seedpoint = dxf_hatch_pattern_seedpoint_new ();
        if (seedpoint == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchPatternSeedPoint struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        seedpoint->id_code = 0;
        seedpoint->x0 = 0.0;
        seedpoint->y0 = 0.0;
        seedpoint->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (seedpoint);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPath *
dxf_hatch_boundary_path_init
(
        DxfHatchBoundaryPath *path
                /*!< DXF hatch boundary path entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        path = dxf_hatch_boundary_path_new ();
        if (path == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPath struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        path->id_code = 0;
        path->edges = NULL;
        path->polylines = NULL;
        path->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (path);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path polyline entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPathPolyline *
dxf_hatch_boundary_path_polyline_init
(
        DxfHatchBoundaryPathPolyline *polyline
                /*!< DXF hatch boundary path polyline entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        polyline = dxf_hatch_boundary_path_polyline_new ();
        if (polyline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathPolyline struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        polyline->id_code = 0;
        polyline->bulge = 0.0;
        polyline->has_bulge = 0;
        polyline->is_closed = 0;
        polyline->number_of_vertices = 0;
        polyline->vertices = NULL;
        polyline->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (polyline);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path polyline vertex entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPathPolylineVertex *
dxf_hatch_boundary_path_polyline_vertex_init
(
        DxfHatchBoundaryPathPolylineVertex *vertex
                /*!< DXF hatch boundary path polyline vertex entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        vertex = dxf_hatch_boundary_path_polyline_vertex_new ();
        if (vertex == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathPolylineVertex struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        vertex->id_code = 0;
        vertex->x0 = 0.0;
        vertex->y0 = 0.0;
        vertex->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (vertex);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path edge entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPathEdge *
dxf_hatch_boundary_path_edge_init
(
        DxfHatchBoundaryPathEdge *edge
                /*!< DXF hatch boundary path edge entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        edge = dxf_hatch_boundary_path_edge_new ();
        if (edge == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdge struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        edge->id_code = 0;
        edge->arcs = NULL;
        edge->ellipses = NULL;
        edge->lines = NULL;
        edge->splines = NULL;
        edge->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (edge);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path edge arc entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPathEdgeArc *
dxf_hatch_boundary_path_edge_arc_init
(
        DxfHatchBoundaryPathEdgeArc *arc
                /*!< DXF hatch boundary path edge arc entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        arc = dxf_hatch_boundary_path_edge_arc_new ();
        if (arc == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeArc struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        arc->id_code = 0;
        arc->x0 = 0.0;
        arc->y0 = 0.0;
        arc->radius = 0.0;
        arc->start_angle = 0.0;
        arc->end_angle = 0.0;
        arc->is_ccw = 0;
        arc->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (arc);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path edge ellipse entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPathEdgeEllipse *
dxf_hatch_boundary_path_edge_ellipse_init
(
        DxfHatchBoundaryPathEdgeEllipse *ellipse
                /*!< DXF hatch boundary path edge ellipse entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        ellipse = dxf_hatch_boundary_path_edge_ellipse_new ();
        if (ellipse == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeEllipse struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        ellipse->id_code = 0;
        ellipse->x0 = 0.0;
        ellipse->y0 = 0.0;
        ellipse->x1 = 0.0;
        ellipse->y1 = 0.0;
        ellipse->minor_axis = 0.0;
        ellipse->start_angle = 0.0;
        ellipse->end_angle = 0.0;
        ellipse->is_ccw = 0;
        ellipse->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (ellipse);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path edge line entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPathEdgeLine *
dxf_hatch_boundary_path_edge_line_init
(
        DxfHatchBoundaryPathEdgeLine *line
                /*!< DXF hatch boundary path edge line entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        line = dxf_hatch_boundary_path_edge_line_new ();
        if (line == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeLine struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        line->id_code = 0;
        line->x0 = 0.0;
        line->y0 = 0.0;
        line->x1 = 0.0;
        line->y1 = 0.0;
        line->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (line);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path edge spline entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPathEdgeSpline *
dxf_hatch_boundary_path_edge_spline_init
(
        DxfHatchBoundaryPathEdgeSpline *spline
                /*!< DXF hatch boundary path edge spline entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        spline = dxf_hatch_boundary_path_edge_spline_new ();
        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeSpline struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        spline->id_code = 0;
        spline->degree = 0;
        spline->rational = 0;
        spline->periodic = 0;
        spline->number_of_knots = 0;
        for (i = 0; i >= DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS; i++)
        {
                spline->knots[i] = 0.0;
        }
        spline->number_of_control_points = 0;
        spline->control_points = NULL;
        spline->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (spline);
}


/*!
 * \brief Allocate memory and initialize data fields in a DXF \c HATCH
 * boundary path edge spline control point entity.
 * 
 * \return \c NULL when no memory was allocated, a pointer to the
 * allocated memory when succesful.
 */
DxfHatchBoundaryPathEdgeSplineCp *
dxf_hatch_boundary_path_edge_spline_control_point_init
(
        DxfHatchBoundaryPathEdgeSplineCp *control_point
                /*!< DXF hatch boundary path edge spline control point entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        control_point = dxf_hatch_boundary_path_edge_spline_control_point_new ();
        if (control_point == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () could not allocate memory for a DxfHatchBoundaryPathEdgeSplineCp struct.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        control_point->id_code = 0;
        control_point->x0 = 0.0;
        control_point->y0 = 0.0;
        control_point->weight = 0.0;
        control_point->next = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (control_point);
}


/*!
 * \brief Append a control point to a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for \c NULL pointers, both the control point is
 * appended and the \c number_of_control_points is increased by 1.\n
 * \n
 * <h3>Example:</h3>
 * Start situation: a spline with 4 control points, and the control
 * point \c control_point that is to be appended.\n
 * \n
\dot
digraph start
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  spline [shape=record,label="<fo>spline\n|{id_code}|{degree}|{rational}|{periodic}|{number_of_knots}|{knots\[\]}|{number_of_control_points}|{<f1>control_points}"];
  control_point [shape=record,label="<f0>control_point|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp1 [shape=record, label="<f0>cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp2 [shape=record,label="<f0>cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp3 [shape=record,label="<f0>cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp4 [shape=record,label="<f0>cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  spline:f1 -> cp1:f0 [arrowhead="open",style="dashed",color="purple"];
  cp1:f1 -> cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  cp2:f1 -> cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  cp3:f1 -> cp4:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot
 * \n
 * Finished situation: a spline with the appended fifth control point,
 * the memory for control point \c control_point is freed and set to
 * \c NULL.\n
 * \n
\dot
digraph finish
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  spline [shape=record,label="<fo>spline\n|{id_code}|{degree}|{rational}|{periodic}|{number_of_knots}|{knots\[\]}|{number_of_control_points}|{<f1>control_points}"];
  cp1 [shape=record, label="<f0>cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp2 [shape=record,label="<f0>cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp3 [shape=record,label="<f0>cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp4 [shape=record,label="<f0>cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  appended [shape=record,label="<f0>appended|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  spline:f1 -> cp1:f0 [arrowhead="open",style="dashed",color="purple"];
  cp1:f1 -> cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  cp2:f1 -> cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  cp3:f1 -> cp4:f0 [arrowhead="open",style="dashed",color="purple"];
  cp4:f1 -> appended:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot
 *
 * \warning The pointer to the control point \c control_point is freed
 * and set to NULL.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_append_control_point
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        DxfHatchBoundaryPathEdgeSplineCp *control_point
                /*!< DXF \c HATCH boundary path edge spline control point
                 * entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (control_point == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline_cp.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (sizeof (spline) < sizeof (DxfHatchBoundaryPathEdgeSpline))
        {
                spline = realloc (spline, sizeof (DxfHatchBoundaryPathEdgeSpline));
        }
        if (spline->control_points == NULL)
        {
                /* no control points yet, so append the first control
                 * point. */
                /*! \todo warning: assignment from incompatible pointer type. */
                spline->control_points = control_point;
        }
        else
        {
                /* iterate through all existing pointers to control
                 * points until the pointer to the last control point
                 * containing a NULL ponter in it's "next" member is
                 * found. */
                DxfHatchBoundaryPathEdgeSplineCp *iter = NULL;
                iter = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                iter = (DxfHatchBoundaryPathEdgeSplineCp *) spline->control_points;
                for (;;)
                {
                        iter = (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                        if (iter->next == NULL)
                        {
                                break;
                        }
                }
                /* "iter" now contains the pointer to the last known
                 * control point, now we can write the pointer to the
                 * control point that has to be appended in the "next"
                 * member. */
                DxfHatchBoundaryPathEdgeSplineCp *new = NULL;
                new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                new->id_code = control_point->id_code;
                new->x0 = control_point->x0;
                new->y0 = control_point->y0;
                new->weight = control_point->weight;
                new->next = NULL;
                /*! \todo warning: assignment from incompatible pointer type. */
                iter->next = new;
                spline->number_of_control_points++;
                /* clean up. */
                dxf_hatch_boundary_path_edge_spline_control_point_free (control_point);
                control_point = NULL;
                dxf_hatch_boundary_path_edge_spline_control_point_free (iter);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Append a knot value to a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for a \c NULL pointer or an array pointer overflow,
 * both the knot value is appended and the \c number_of_knots is
 * increased by 1.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_append_knot_value
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        double knot_value
                /*!< knot value. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if ((spline->number_of_knots + 1) > DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (("ERROR in %s () resulted in a array pointer overflow.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        spline->knots[spline->number_of_knots + 1] = knot_value;
        spline->number_of_knots++;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Prepend a control point to a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for \c NULL pointers the new control point is
 * prepended and the \c number_of_control_points is increased by 1.\n
 * \n
 * <h3>Example:</h3>
 * Start situation: a spline with 4 control points, and the control
 * point \c control_point that is to be prepended.\n
 * \n
\dot
digraph start
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  spline [shape=record,label="<fo>spline\n|{id_code}|{degree}|{rational}|{periodic}|{number_of_knots}|{knots\[\]}|{number_of_control_points}|{<f1>control_points}"];
  control_point [shape=record,label="<f0>control_point|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp1 [shape=record, label="<f0>cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp2 [shape=record,label="<f0>cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp3 [shape=record,label="<f0>cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp4 [shape=record,label="<f0>cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  spline:f1 -> cp1:f0 [arrowhead="open",style="dashed",color="purple"];
  cp1:f1 -> cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  cp2:f1 -> cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  cp3:f1 -> cp4:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot
 * \n
 * Finished situation: a spline with the prepended control point
 * totalling 5 control points, the memory for control point
 * \c control_point is freed and set to \c NULL.\n
 * \n
\dot
digraph finish
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  spline [shape=record,label="<fo>spline\n|{id_code}|{degree}|{rational}|{periodic}|{number_of_knots}|{knots\[\]}|{number_of_control_points}|{<f1>control_points}"];
  cp1 [shape=record, label="<f0>cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp2 [shape=record,label="<f0>cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp3 [shape=record,label="<f0>cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp4 [shape=record,label="<f0>cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  prepended [shape=record,label="<f0>prepended|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  spline:f1 -> prepended:f0 [arrowhead="open",style="dashed",color="purple"];
  prepended:f1 -> cp1:f0 [arrowhead="open",style="dashed",color="purple"];
  cp1:f1 -> cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  cp2:f1 -> cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  cp3:f1 -> cp4:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot
 * \warning The pointer to the control point \c control_point is freed
 * and set to NULL.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_prepend_control_point
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        DxfHatchBoundaryPathEdgeSplineCp *control_point
                /*!< DXF \c HATCH boundary path edge spline control point
                 * entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (control_point == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline_cp.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (sizeof (spline) < sizeof (DxfHatchBoundaryPathEdgeSpline))
        {
                spline = realloc (spline, sizeof (DxfHatchBoundaryPathEdgeSpline));
        }
        if (spline->control_points == NULL)
        {
                /* no control points yet, so prepend the first control
                 * point. */
                DxfHatchBoundaryPathEdgeSplineCp *new = NULL;
                new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                new->id_code = control_point->id_code;
                new->x0 = control_point->x0;
                new->y0 = control_point->y0;
                new->weight = control_point->weight;
                new->next = NULL;
                /*! \todo warning: assignment from incompatible pointer type. */
                spline->control_points = new;
        }
        else
        {
                DxfHatchBoundaryPathEdgeSplineCp *new = NULL;
                new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                new->id_code = control_point->id_code;
                new->x0 = control_point->x0;
                new->y0 = control_point->y0;
                new->weight = control_point->weight;
                new->next = spline->control_points;
                /*! \todo warning: assignment from incompatible pointer type. */
                spline->control_points = (DxfHatchBoundaryPathEdgeSplineCp *) new;
        }
        spline->number_of_control_points++;
        /* clean up. */
        dxf_hatch_boundary_path_edge_spline_control_point_free (control_point);
        control_point = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Prepend a knot value to a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for a \c NULL pointer or an array pointer overflow, all
 * the \c knots[] values are shifted one position up, the knot value is
 * prepended and the \c number_of_knots is increased by 1.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_prepend_knot_value
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        double knot_value
                /*!< knot value. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if ((spline->number_of_knots + 1) > DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (_("ERROR in %s () resulted in a array pointer overflow.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        for (i = spline->number_of_knots; i > 0; i--)
        {
                spline->knots[i + 1] = spline->knots[i];
        }
        spline->knots[0] = knot_value;
        spline->number_of_knots++;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Get a control point to a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for \c NULL pointers, a pointer to the requested control
 * point is returned.
 *
 * \return a pointer to the requested control point.
 */
DxfHatchBoundaryPathEdgeSplineCp *
dxf_hatch_boundary_path_edge_spline_get_control_point
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        int position
                /*!< position of the DXF \c HATCH boundary path edge
                 * spline control point entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathEdgeSplineCp *control_point = NULL;
        int i;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        if (sizeof (spline) < sizeof (DxfHatchBoundaryPathEdgeSpline))
        {
                spline = realloc (spline, sizeof (DxfHatchBoundaryPathEdgeSpline));
        }
        if (spline->number_of_control_points <= position)
        {
                fprintf (stderr,
                  (_("ERROR in %s () position is greater than the number of control points.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        else
        {
                /* iterate through existing pointers to control points
                 * until the pointer to the requested control point is
                 * reached. */
                DxfHatchBoundaryPathEdgeSplineCp *iter = NULL;
                control_point = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                iter = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                iter = (DxfHatchBoundaryPathEdgeSplineCp *) spline->control_points;
                for (i = 1; i <= position; i++)
                {
                        iter = (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                }
                /* "iter" now contains a pointer in "iter->next" to the
                 * requested control point, now we can write the pointer
                 * to control_point and return the pointer value. */
                control_point =  (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                /* clean up. */
                dxf_hatch_boundary_path_edge_spline_control_point_free (iter);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (control_point);
}


/*!
 * \brief Get a knot value from a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for a \c NULL pointer or an array pointer overflow, the
 * desired knot value at \c position is returned.
 *
 * \return the knot value.
 */
double
dxf_hatch_boundary_path_edge_spline_get_knot_value
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        int position
                /*!< position in the array of knot values [0 .. DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS]. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        double knot_value;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (position > DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (_("ERROR in  () received a position greater than DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        knot_value = spline->knots[position];
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (knot_value);
}


/*!
 * \brief Set a control point to a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for \c NULL pointers, the control point is set at the
 * requested position.
 *
 * \warning The pointer to the control point \c cp is freed and set to
 * \c NULL.
 *
 * \return set pointer for the designated control point.
 */
int
dxf_hatch_boundary_path_edge_spline_set_control_point
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        int position,
                /*!< position of the DXF \c HATCH boundary path edge
                 * spline control point entity. */
        DxfHatchBoundaryPathEdgeSplineCp *control_point
                /*!< control point. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (control_point == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in control_point.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (sizeof (spline) < sizeof (DxfHatchBoundaryPathEdgeSpline))
        {
                spline = realloc (spline, sizeof (DxfHatchBoundaryPathEdgeSpline));
        }
        if (spline->number_of_control_points <= position)
        {
                fprintf (stderr,
                  (_("ERROR in %s () position is greater than the number of control points.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (spline->control_points == NULL)
        {
                /* no control points yet, so set at the first control
                 * point pointer. */
                DxfHatchBoundaryPathEdgeSplineCp *new = NULL;
                new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                new->id_code = control_point->id_code;
                new->x0 = control_point->x0;
                new->y0 = control_point->y0;
                new->weight = control_point->weight;
                new->next = NULL;
                /*! \todo warning: assignment from incompatible pointer type. */
                spline->control_points = new;
        }
        else
        {
                /* iterate through existing pointers to control points
                 * until the pointer to the requested control point is
                 * reached. */
                DxfHatchBoundaryPathEdgeSplineCp *iter = NULL;
                iter = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                iter = (DxfHatchBoundaryPathEdgeSplineCp *) spline->control_points;
                for (i = 1; i <= position; i++)
                {
                        iter = (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                }
                /* "iter" now contains a pointer in "iter->next" to the
                 * requested control point, now we can write the pointer
                 * to control_point and return the pointer value. */
                DxfHatchBoundaryPathEdgeSplineCp *new = NULL;
                new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                new->id_code = control_point->id_code;
                new->x0 = control_point->x0;
                new->y0 = control_point->y0;
                new->weight = control_point->weight;
                new->next = NULL;
                /*! \todo warning: assignment from incompatible pointer type. */
                iter->next = new;
                /* clean up. */
                dxf_hatch_boundary_path_edge_spline_control_point_free (iter);
                dxf_hatch_boundary_path_edge_spline_control_point_free (control_point);
                control_point = NULL;
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Set a knot value to a \c HATCH boundary path edge spline entity.
 *
 * After testing for a \c NULL pointer or an array pointer overflow, the
 * desired knot value at \c position is set.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_set_knot_value
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        int position,
                /*!< position in the array of knot values [0 .. DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS]. */
        double knot_value
                /*!< knot value. */
)
{
#if DEBUG
        fprintf (stderr, "[File: %s: line: %d] Entering dxf_hatch_boundary_path_edge_spline_set_knot_value () function.\n",
                __FILE__, __LINE__);
#endif
        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (position > DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a position greater than DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        spline->knots[position] = knot_value;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Insert a control point to a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for \c NULL pointers, insert the requested control
 * point at the requested position.\n
 * \n
 * <h3>Example:</h3>
 * Start situation: a spline with 4 control points, and the control
 * point \c control_point that is to be inserted.\n
 * \n
 *
\dot
digraph start
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  spline [shape=record,label="<fo>spline\n|{id_code}|{degree}|{rational}|{periodic}|{number_of_knots}|{knots\[\]}|{number_of_control_points}|{<f1>control_points}"];
  control_point [shape=record,label="<f0>control_point|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp1 [shape=record, label="<f0>cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp2 [shape=record,label="<f0>cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp3 [shape=record,label="<f0>cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp4 [shape=record,label="<f0>cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  spline:f1 -> cp1:f0 [arrowhead="open",style="dashed",color="purple"];
  cp1:f1 -> cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  cp2:f1 -> cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  cp3:f1 -> cp4:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot
 * \n
 * Finished situation: a spline with the inserted control point between
 * control points cp2 and cp3, totalling 5 control points, the memory
 * for control point \c control_point is freed and set to \c NULL.\n
 * \n
\dot
digraph finish
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  spline [shape=record,label="<fo>spline\n|{id_code}|{degree}|{rational}|{periodic}|{number_of_knots}|{knots\[\]}|{number_of_control_points}|{<f1>control_points}"];
  cp1 [shape=record, label="<f0>cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp2 [shape=record,label="<f0>cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp3 [shape=record,label="<f0>cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp4 [shape=record,label="<f0>cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  inserted [shape=record,label="<f0>inserted|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  spline:f1 -> cp1:f0 [arrowhead="open",style="dashed",color="purple"];
  cp1:f1 -> cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  cp2:f1 -> inserted:f0 [arrowhead="open",style="dashed",color="purple"];
  inserted:f1 -> cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  cp3:f1 -> cp4:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot
 *
 * \note There are two other possible and distinct scenarios, which
 * result in inserting at the first position (see "prepending"), or
 * result in inserting at the last position (see "appending").\n
 * Both these cases are addressed in this function (see comments in the
 * source code).
 *
 * \warning The pointer to the control point \c control_point is freed
 * and set to NULL.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_insert_control_point
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        int position,
                /*!< position of the DXF \c HATCH boundary path edge
                 * spline control point entity. */
        DxfHatchBoundaryPathEdgeSplineCp *control_point
                /*!< control point. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (control_point == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in control_point.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (spline->number_of_control_points <= position)
        {
                fprintf (stderr,
                  (_("ERROR in %s () position is greater than the number of control points.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (sizeof (spline) < sizeof (DxfHatchBoundaryPathEdgeSpline))
        {
                spline = realloc (spline, sizeof (DxfHatchBoundaryPathEdgeSpline));
        }
        if (spline->control_points == NULL)
        {
                /* no control points yet, so insert a copy of "cp" at
                 * the first control point pointer. */
                DxfHatchBoundaryPathEdgeSplineCp *new = NULL;
                new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                new->id_code = control_point->id_code;
                new->x0 = control_point->x0;
                new->y0 = control_point->y0;
                new->weight = control_point->weight;
                new->next = NULL;
                /*! \todo warning: assignment from incompatible pointer type. */
                spline->control_points = new;
        }
        else
        {
                DxfHatchBoundaryPathEdgeSplineCp *iter = NULL;
                DxfHatchBoundaryPathEdgeSplineCp *temp = NULL;
                iter = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                temp = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                /* iterate through existing pointers to control points
                 * until the pointer to the requested control point is
                 * reached. */
                iter = (DxfHatchBoundaryPathEdgeSplineCp *) spline->control_points;
                for (i = 2; i <= position; i++)
                {
                        iter = (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                }
                /* "iter" now contains a pointer (in "iter->next") to
                 * the control point with the requested position.
                 * first we have to get a pointer to the next control
                 * point "downward" (if any) of the position of the
                 * requested control point and store this one in a
                 * temporary variable. */
                temp = (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                if (temp == NULL)
                {
                        /* "iter" points to the last control point, just
                         * append a copy of "cp". */
                        DxfHatchBoundaryPathEdgeSplineCp *new = NULL;
                        new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                        new->id_code = control_point->id_code;
                        new->x0 = control_point->x0;
                        new->y0 = control_point->y0;
                        new->weight = control_point->weight;
                        new->next = NULL;
                        /*! \todo warning: assignment from incompatible pointer type. */
                        iter->next = new;
                }
                else
                {
                        DxfHatchBoundaryPathEdgeSplineCp *new = NULL;
                        new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                        new->id_code = control_point->id_code;
                        new->x0 = control_point->x0;
                        new->y0 = control_point->y0;
                        new->weight = control_point->weight;
                        /* the next step is to connect the "downward chain" to
                         * the to be inserted "control_point->next". */
                        new->next = temp->next;
                        /* the final step is to connect the "upward chain" to
                         * the to be inserted control point. */
                        temp =  new;
                }
                /* clean up. */
                dxf_hatch_boundary_path_edge_spline_control_point_free (control_point);
                control_point = NULL;
                dxf_hatch_boundary_path_edge_spline_control_point_free (iter);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Insert a knot value into a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for a \c NULL pointer or an array pointer overflow, all
 * the knot values upwards of \c knots[\c position] are shifted one
 * position,  the knot value is inserted at \c knots[\c position] and
 * the  \c number_of_knots is increased by 1.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_insert_knot_value
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        int position,
                /*!< position in the array of knot values [0 .. DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS]. */
        double knot_value
                /*!< knot value. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if ((spline->number_of_knots + 1) > DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (_("ERROR in %s () resulted in a array pointer overflow.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (position >= DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a position greater than DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        for (i = spline->number_of_knots; i <= position; i--)
        {
                spline->knots[i + 1] = spline->knots[i];
        }
        spline->knots[position] = knot_value;
        spline->number_of_knots++;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Remove a control point from a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for \c NULL pointers remove the requested control
 * point.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_remove_control_point
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        int position
                /*!< position of the DXF \c HATCH boundary path edge
                 * spline control point entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (spline->number_of_control_points <= position)
        {
                fprintf (stderr,
                  (_("ERROR in %s () position is greater than the number of control points.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (sizeof (spline) < sizeof (DxfHatchBoundaryPathEdgeSpline))
        {
                spline = realloc (spline, sizeof (DxfHatchBoundaryPathEdgeSpline));
        }
        if (spline->control_points == NULL)
        {
                /* no control points yet, so there is no control point to
                 * remove. */
                fprintf (stderr,
                  (_("ERROR in %s () spline contins no control points.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        else
        {
                DxfHatchBoundaryPathEdgeSplineCp *iter = NULL;
                DxfHatchBoundaryPathEdgeSplineCp *temp = NULL;
                iter = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                temp = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                /* iterate through existing pointers to control points
                 * until the pointer to the requested control point is
                 * reached. */
                iter = (DxfHatchBoundaryPathEdgeSplineCp *) spline->control_points;
                for (i = 0; i <= (position - 1); i++)
                {
                        iter = (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                        /* "iter" now contains a pointer to the control point
                         * prior to the requested position (the requested
                         * pointer is in "iter->next"). */
                }
                /* first we have to get a pointer to the next control
                 * point in the "downward chain" after the  position
                 * of the requested control point and store this one in
                 * a temporary variable. */
                temp = (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                /* the next step is to connect the "downward chain" to
                 * the the contol point before the requested control
                 * point (the pointer to the last control point in the
                 * "upward chain" is in "iter"). */
                iter = (DxfHatchBoundaryPathEdgeSplineCp *) temp->next;
                /* clean up. */
                dxf_hatch_boundary_path_edge_spline_control_point_free (iter);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Remove a knot value from a \c HATCH boundary path edge spline
 * entity.
 *
 * After testing for a \c NULL pointer or an array pointer overflow, all
 * the knot values upwards of \c knots[\c position] are shifted one
 * position down, and the \c number_of_knots is decreased by 1.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_remove_knot_value
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity. */
        int position
                /*!< position in the array of knot values [0 .. DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS]. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (spline->number_of_knots > DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (_("ERROR in %s () resulted in a array pointer overflow.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if ((spline->number_of_knots - 1) < 0)
        {
                fprintf (stderr,
                  (_("ERROR in %s () resulted in a array pointer underflow.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (position >= DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a position greater than DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        for (i = position; i >= spline->number_of_knots; i++)
        {
                spline->knots[i] = spline->knots[i + 1];
        }
        spline->number_of_knots--;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Copy control points from a \c HATCH boundary path edge spline
 * entity into a new chain of control points.
 *
 * After testing for \c NULL pointers and size of the allocated memory,
 * a new chain of control points (destination) is setup by copying the
 * member values from the control points from the spline (source).\n
 * For each control point in the destination chain new memory is
 * allocated.\n
 * \n
 * <h3>Example:</h3>
 * Start situation: a spline with 4 control points, and the control
 * point \c control_points.\n
 * \n

\dot
digraph dxf_hatch_boundary_path_edge_spline_copy_control_points__spline_start
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  spline [shape=record,label="<fo>spline\n|{id_code}|{degree}|{rational}|{periodic}|{number_of_knots}|{knots\[\]}|{number_of_control_points}|{<f1>control_points}"];
  cp1 [shape=record, label="<f0>cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp2 [shape=record,label="<f0>cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp3 [shape=record,label="<f0>cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp4 [shape=record,label="<f0>cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  spline:f1 -> cp1:f0 [arrowhead="open",style="dashed",color="purple"];
  cp1:f1 -> cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  cp2:f1 -> cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  cp3:f1 -> cp4:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot

\dot
digraph dxf_hatch_boundary_path_edge_spline_copy_control_points__control_points_start
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  control_points [shape=record,label="<f0>control_points|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
}
\enddot

 * \n
 * Finished situation: the unchanged \c spline with 4 control points,
 * and a chain of control points starting at \c control_points.\n
 * \n

\dot
digraph dxf_hatch_boundary_path_edge_spline_copy_control_points__spline_finish
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  spline [shape=record,label="<fo>spline\n|{id_code}|{degree}|{rational}|{periodic}|{number_of_knots}|{knots\[\]}|{number_of_control_points}|{<f1>control_points}"];
  cp1 [shape=record, label="<f0>cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp2 [shape=record,label="<f0>cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp3 [shape=record,label="<f0>cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  cp4 [shape=record,label="<f0>cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  spline:f1 -> cp1:f0 [arrowhead="open",style="dashed",color="purple"];
  cp1:f1 -> cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  cp2:f1 -> cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  cp3:f1 -> cp4:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot

\dot
digraph dxf_hatch_boundary_path_edge_spline_copy_control_points__controlpoints_finish
{
  nodesep=.05;
  size = "7.5,7.5";
  rankdir=LR;
  node [shape=record,width=.05,height=.05];
  control_points [shape=record,label="<f0>control_points=new_cp1|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  new_cp2 [shape=record,label="<f0>new_cp2|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  new_cp3 [shape=record,label="<f0>new_cp3|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  new_cp4 [shape=record,label="<f0>new_cp4|{id_code}|{x0}|{y0}|{weight}|{<f1>next}"];
  control_points:f1 -> new_cp2:f0 [arrowhead="open",style="dashed",color="purple"];
  new_cp2:f1 -> new_cp3:f0 [arrowhead="open",style="dashed",color="purple"];
  new_cp3:f1 -> new_cp4:f0 [arrowhead="open",style="dashed",color="purple"];
}
\enddot

 * \return a pointer to the first of the requested control points.
 */
DxfHatchBoundaryPathEdgeSplineCp *
dxf_hatch_boundary_path_edge_spline_copy_control_points
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity
                 * (source). */
        DxfHatchBoundaryPathEdgeSplineCp *control_points
                /*!< DXF \c HATCH boundary path edge spline control
                 * point entity (destination). */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        if (control_points == NULL)
        {
                fprintf (stderr,
                  (_("WARNING in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline_cp.\n")),
                  __FUNCTION__);
                fprintf (stderr,
                  (_("\tAllocating memory.\n")));
                control_points = dxf_hatch_boundary_path_edge_spline_control_point_new ();
        }
        if (sizeof (spline) < sizeof (DxfHatchBoundaryPathEdgeSpline))
        {
                spline = realloc (spline, sizeof (DxfHatchBoundaryPathEdgeSpline));
        }
        if (spline->control_points == NULL)
        {
                /* no control points yet, so there is no control point
                 * to copy. */
                fprintf (stderr,
                  (_("ERROR in %s () spline contins no control points.\n")),
                  __FUNCTION__);
                return (NULL);
        }
        else
        {
                /* iterate through all existing pointers to control
                 * points until the pointer to the last control point
                 * containing a NULL ponter in it's "next" member is
                 * found. */
                DxfHatchBoundaryPathEdgeSplineCp *iter = NULL;
                DxfHatchBoundaryPathEdgeSplineCp *iter_new = NULL;
                iter = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                iter = (DxfHatchBoundaryPathEdgeSplineCp *) spline->control_points;
                iter_new = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                control_points = iter_new;
                for (;;)
                {
                        /* copy member contents into new control point. */
                        iter_new->id_code = iter->id_code;
                        iter_new->x0 = iter->x0;
                        iter_new->y0 = iter->y0;
                        iter_new->weight = iter->weight;
                        if (iter->next == NULL)
                        {
                                /* the last control point of the spline
                                 * is reached. */
                                iter_new->next = NULL;
                                break;
                        }
                        else
                        {
                                /* create a new contol point in the chain. */
                                /*! \todo warning: assignment from incompatible pointer type. */
                                iter_new->next = dxf_hatch_boundary_path_edge_spline_control_point_new ();
                        }
                        /* set both iterators to the next control point
                         * in their chain. */
                        iter = (DxfHatchBoundaryPathEdgeSplineCp *) iter->next;
                        iter_new = (DxfHatchBoundaryPathEdgeSplineCp *) iter_new->next;
                }
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (control_points);
}


/*!
 * \brief Copy knot values from a \c HATCH boundary path edge spline
 * entity into an array.
 *
 * After testing for a \c NULL pointer or an array pointer overflow, all
 * the knot values from \c spline (source) are copied into an array
 * \c knot_values (destination).
 *
 * \warning Make sure enough memory is allocated for the destination
 * array.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_copy_knot_values
(
        DxfHatchBoundaryPathEdgeSpline *spline,
                /*!< DXF \c HATCH boundary path edge spline entity (source). */
        double *knot_values[DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS]
                /*!< Array of knot values (destination). */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;

        if (spline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received a NULL pointer value in dxf_hatch_boundary_path_edge_spline.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (spline->number_of_knots > DXF_MAX_HATCH_BOUNDARY_PATH_EDGE_SPLINE_KNOTS)
        {
                fprintf (stderr,
                  (_("ERROR in %s () resulted in a array pointer overflow.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        for (i = 0; i < spline->number_of_knots; i++)
        {
                *knot_values[i] = spline->knots[i];
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Write DXF output to a file for a hatch entity (\c HATCH).
 */
int
dxf_hatch_write
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        DxfHatch *dxf_hatch
                /*!< DXF hatch entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        char *dxf_entity_name = strdup ("HATCH");
        int i;
        struct DxfHatchPatternSeedPoint *seed_points = NULL;

        if (dxf_hatch == NULL)
        {
                fprintf (stderr,
                  (_("Error in %s () a NULL pointer was passed.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (strcmp (dxf_hatch->layer, "") == 0)
        {
                fprintf (stderr,
                  (_("Warning: empty layer string for the %s entity with id-code: %x\n")),
                        dxf_entity_name, dxf_hatch->id_code);
                fprintf (stderr,
                  (_("    %s entity is relocated to layer 0")),
                        dxf_entity_name);
                dxf_hatch->layer = strdup (DXF_DEFAULT_LAYER);
        }
        fprintf (fp, "  0\n%s\n", dxf_entity_name);
        fprintf (fp, "100\nAcDbHatch\n");
        fprintf (fp, "  2\n%s\n", dxf_hatch->pattern_name);
        if (dxf_hatch->id_code != -1)
        {
                fprintf (fp, "  5\n%x\n", dxf_hatch->id_code);
        }
        if (strcmp (dxf_hatch->linetype, DXF_DEFAULT_LINETYPE) != 0)
        {
                fprintf (fp, "  6\n%s\n", dxf_hatch->linetype);
        }
        fprintf (fp, "  8\n%s\n", dxf_hatch->layer);
        fprintf (fp, " 10\n%f\n", dxf_hatch->x0);
        fprintf (fp, " 20\n%f\n", dxf_hatch->y0);
        fprintf (fp, " 30\n%f\n", dxf_hatch->z0);
        fprintf (fp, "210\n%f\n", dxf_hatch->extr_x0);
        fprintf (fp, "220\n%f\n", dxf_hatch->extr_y0);
        fprintf (fp, "230\n%f\n", dxf_hatch->extr_z0);
        if (dxf_hatch->thickness != 0.0)
        {
                fprintf (fp, " 39\n%f\n", dxf_hatch->thickness);
        }
        if (!dxf_hatch->solid_fill)
        {
                fprintf (fp, " 42\n%f\n", dxf_hatch->pattern_scale);
        }
        fprintf (fp, " 47\n%f\n", dxf_hatch->pixel_size);
        if (!dxf_hatch->solid_fill)
        {
                fprintf (fp, " 52\n%f\n", dxf_hatch->pattern_angle);
        }
        if (dxf_hatch->color != DXF_COLOR_BYLAYER)
        {
                fprintf (fp, " 62\n%d\n", dxf_hatch->color);
        }
        if (dxf_hatch->paperspace == DXF_PAPERSPACE)
        {
                fprintf (fp, " 67\n%d\n", DXF_PAPERSPACE);
        }
        fprintf (fp, " 70\n%d\n", dxf_hatch->solid_fill);
        fprintf (fp, " 71\n%d\n", dxf_hatch->associative);
        fprintf (fp, " 75\n%d\n", dxf_hatch->pattern_style);
        if (!dxf_hatch->solid_fill)
        {
                fprintf (fp, " 77\n%d\n", dxf_hatch->pattern_double);
        }
        fprintf (fp, " 78\n%d\n", dxf_hatch->number_of_pattern_def_lines);
        fprintf (fp, " 98\n%d\n", dxf_hatch->number_of_seed_points);
        if (dxf_hatch->number_of_seed_points > 0)
        {
                seed_points = (DxfHatchPatternSeedPoint *) dxf_hatch->seed_points;
                while (seed_points != NULL);
                {
/*! \todo error: dereferencing pointer to incomplete type in:\n
                        fprintf (fp, " 10\n%f\n", (double) seed_points->x0);
 */
/*! \todo error: dereferencing pointer to incomplete type in:\n
                        fprintf (fp, " 20\n%f\n", (double) seed_points->y0);
 */
/*! \todo error: dereferencing pointer to incomplete type in:\n
                        seed_points = (DxfHatchPatternSeedPoint *) seed_points->next;
 */
                }
        }
        fprintf (fp, " 91\n%d\n", dxf_hatch->number_of_boundary_paths);
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Write DXF output to a file for a hatch entity (\c HATCH).
 */
int
dxf_hatch_write_lowlevel
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        char *pattern_name,
                /*!< group code = 2. */
        int id_code,
                /*!< group code = 5. */
        char *linetype,
                /*!< group code = 6\n
                 * optional, defaults to BYLAYER. */
        char *layer,
                /*!< group code = 8. */
        double x0,
                /*!< group code = 10\n
                 * base point. */
        double y0,
                /*!< group code = 20\n
                 * base point. */
        double z0,
                /*!< group code = 30\n
                 * base point. */
        double extr_x0,
                /*!< group code = 210\n
                 * extrusion direction\n
                 * optional, if ommited defaults to 0.0. */
        double extr_y0,
                /*!< group code = 220\n
                 * extrusion direction\n
                 * optional, if ommited defaults to 0.0. */
        double extr_z0,
                /*!< group code = 230\n
                 * extrusion direction\n
                 * optional, if ommited defaults to 1.0. */
        double thickness,
                /*!< group code = 39\n
                 * optional, defaults to 0.0. */
        double pattern_scale,
                /*!< group code 41\n
                 * pattern fill only. */
        double pixel_size,
                /*!< group code 47. */
        double pattern_angle,
                /*!< group code 52\n
                 *  pattern fill only. */
        int color,
                /*!< group code = 62\n
                 * optional, defaults to BYLAYER. */
        int paperspace,
                /*!< group code = 67\n
                 * optional, defaults to 0 (modelspace). */
        int solid_fill,
                /*!< group code = 70\n
                 * 0 = pattern fill\n
                 * 1 = solid fill. */
        int associative,
                /*!< group code = 71\n
                 * 0 = non-associative\n
                 * 1 = associative. */
        int style,
                /*!< group code = 75\n
                 * 0 = hatch "odd parity" area (Normal style)\n
                 * 1 = hatch outermost area only (Outer style)\n
                 * 2 = hatch through entire area (Ignore style). */
        int pattern_style,
                /*!< group code = 76\n
                 * 0 = user defined\n
                 * 1 = predefined\n
                 * 2 = custom. */
        int pattern_double,
                /*!< group code = 77\n
                 * pattern fill only\n
                 * 0 = not double\n
                 * 1 = double. */
        int pattern_def_lines,
                /*!< group code = 78\n
                 * number of pattern definition lines. */
        int pattern_boundary_paths,
                /*!< group code = 91\n
                 * number of boundary paths (loops). */
        int seed_points,
                /*!< group code = 98\n
                 * number of seed points. */
                double *seed_x0,
                        /*!< group code = 10\n
                         * seed point X-value. */
                double *seed_y0
                        /*!< group code = 20\n
                         * seed point Y-value. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        char *dxf_entity_name = strdup ("HATCH");
        int i;
        if (strcmp (layer, "") == 0)
        {
                fprintf (stderr,
                  (_("Warning: empty layer string for the %s entity with id-code: %x\n")),
                        dxf_entity_name, id_code);
                fprintf (stderr,
                  (_("    %s entity is relocated to layer 0")),
                        dxf_entity_name);
                layer = strdup (DXF_DEFAULT_LAYER);
        }
        fprintf (fp, "  0\n%s\n", dxf_entity_name);
        fprintf (fp, "100\nAcDbHatch\n");
        fprintf (fp, "  2\n%s\n", pattern_name);
        if (id_code != -1)
        {
                fprintf (fp, "  5\n%x\n", id_code);
        }
        if (strcmp (linetype, DXF_DEFAULT_LINETYPE) != 0)
        {
                fprintf (fp, "  6\n%s\n", linetype);
        }
        fprintf (fp, "  8\n%s\n", layer);
        fprintf (fp, " 10\n%f\n", x0);
        fprintf (fp, " 20\n%f\n", y0);
        fprintf (fp, " 30\n%f\n", z0);
        fprintf (fp, "210\n%f\n", extr_x0);
        fprintf (fp, "220\n%f\n", extr_y0);
        fprintf (fp, "230\n%f\n", extr_z0);
        if (thickness != 0.0)
        {
                fprintf (fp, " 39\n%f\n", thickness);
        }
        if (!solid_fill)
        {
                fprintf (fp, " 42\n%f\n", pattern_scale);
        }
        fprintf (fp, " 47\n%f\n", pixel_size);
        if (!solid_fill)
        {
                fprintf (fp, " 52\n%f\n", pattern_angle);
        }
        if (color != DXF_COLOR_BYLAYER)
        {
                fprintf (fp, " 62\n%d\n", color);
        }
        if (paperspace == DXF_PAPERSPACE)
        {
                fprintf (fp, " 67\n%d\n", DXF_PAPERSPACE);
        }
        fprintf (fp, " 70\n%d\n", solid_fill);
        fprintf (fp, " 71\n%d\n", associative);
        fprintf (fp, " 75\n%d\n", style);
        if (!solid_fill)
        {
                fprintf (fp, " 77\n%d\n", pattern_double);
        }
        fprintf (fp, " 78\n%d\n", pattern_def_lines);
        fprintf (fp, " 98\n%d\n", seed_points);
        if (!seed_points)
        {
                for (i = 0; i < seed_points; i++)
                {
                        fprintf (fp, " 10\n%f\n", seed_x0[i]);
                        fprintf (fp, " 20\n%f\n", seed_y0[i]);
                }
        }
        fprintf (fp, " 91\n%d\n", pattern_boundary_paths);
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Write DXF output to a file for hatch boundary entities.
 *
 * Requires AutoCAD version R14 or higher.
 */
int
dxf_hatch_boundaries_write_lowlevel
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        int hatch_boundary_paths,
                /*!< group code = 91\n
                 * number of boundary paths (loops). */
        int hatch_boundary_path_type_flag,
                /*!< group code = 92\n
                 * boundary path type flag\n
                 * bit coded:\n
                 * 0 = default.\n
                 * 1 = external.\n
                 * 2 = polyline.\n
                 * 4 = derived.\n
                 * 8 = textbox.\n
                 * 16 = outermost. */
                int hatch_boundary_path_edges,
                        /*!< group code = 93\n
                         * number of edges in this boundary path\n
                         * (only if boundary is not a polyline). */
                int hatch_boundary_path_edge_type,
                        /*!< group code = 72\n
                         * (only if boundary is not a polyline).\n
                         * 1 = line.\n
                         * 2 = circular arc.\n
                         * 3 = elliptic arc.\n
                         * 4 = spline.
                         */
                        double hatch_boundary_path_edge_line_x0,
                                /*!< group code = 10. */
                        double hatch_boundary_path_edge_line_y0,
                                /*!< group code = 20. */
                        double hatch_boundary_path_edge_line_x1,
                                /*!< group code = 11. */
                        double hatch_boundary_path_edge_line_y1,
                                /*!< group code = 21.\n */
                        double hatch_boundary_path_edge_arc_x0,
                                /*!< group code = 10\n
                                 * X-value of center point coordinate. */
                        double hatch_boundary_path_edge_arc_y0,
                                /*!< group code = 20\n
                                 * Y-value of center point coordinate. */
                        double hatch_boundary_path_edge_arc_radius,
                                /*!< group code = 40. */
                        double hatch_boundary_path_edge_arc_start_angle,
                                /*!< group code = 50. */
                        double hatch_boundary_path_edge_arc_end_angle,
                                /*!< group code = 51. */
                        int hatch_boundary_path_edge_arc_is_ccw,
                                /*!< group code = 73\n
                                 * arc is counterclockwise flag.\n */
                        double hatch_boundary_path_edge_ellipse_x0,
                                /*!< group code = 10\n
                                 * X-value of center point coordinate. */
                        double hatch_boundary_path_edge_ellipse_y0,
                                /*!< group code = 20\n
                                 * Y-value of center point coordinate. */
                        double hatch_boundary_path_edge_ellipse_x1,
                                /*!< group code = 11\n
                                 * X-value of end point coordinate of major
                                 * axis (relative to center point. */
                        double hatch_boundary_path_edge_ellipse_y1,
                                /*!< group code = 21\n
                                 * Y-value of end point coordinate of major
                                 * axis (relative to center point. */
                        double boundary_path_edge_ellipse_minor_axis,
                                /*!< group code = 40\n
                                 * length of minor axis (percentage of major
                                 * axis length). */
                        double hatch_boundary_path_edge_ellipse_start_angle,
                                /*!< group code = 50. */
                        double hatch_boundary_path_edge_ellipse_end_angle,
                                /*!< group code = 51. */
                        int hatch_boundary_path_edge_ellipse_is_ccw,
                                /*!< group code = 73\n
                                 * ellipse is counterclockwise flag.\n */
                        int hatch_boundary_path_edge_spline_degree,
                                /*!< group code = 94. */
                        int hatch_boundary_path_edge_spline_rational,
                                /*!< group code = 73. */
                        int hatch_boundary_path_edge_spline_periodic,
                                /*!< group code = 74. */
                        int hatch_boundary_path_edge_spline_knots,
                                /*!< group code = 95\n
                                 * number of knots. */
                        int hatch_boundary_path_edge_spline_control_points,
                                /*!< group code = 96\n
                                 * number of control points. */
                                int *hatch_boundary_path_edge_spline_knot_value,
                                        /*!< group code = 40. */
                                double *hatch_boundary_path_edge_spline_cp_x0,
                                        /*!< group code = 10. */
                                double *hatch_boundary_path_edge_spline_cp_y0,
                                        /*!< group code = 20. */
                                double *hatch_boundary_path_edge_spline_cp_weight,
                                        /*!< group code = 42\n
                                         * optional, defaults to 1.0. */
                int hatch_boundary_path_polyline_has_bulge,
                        /*!< group code = 72\n
                         * polyline boundary data group only. */
                int hatch_boundary_path_polyline_is_closed,
                        /*!< group code = 73\n
                         * polyline boundary data group only. */
                int hatch_boundary_path_polyline_vertices,
                        /*!< group code = 93\n
                         * number of polyline vertices to follow. */
                double hatch_boundary_path_polyline_bulge,
                        /*!< group code = 42. */
                        double *hatch_boundary_path_polyline_x0,
                                /*!< group code = 10. */
                        double *hatch_boundary_path_polyline_y0,
                                /*!< group code = 20. */
        int hatch_boundary_objects,
                /*!< group code = 97\n
                 * number of source boundary objects. */
        char *hatch_boundary_objects_ref
                /*!< group code = 330\n
                 * reference to source boundary objects (multiple entries). */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;
        int j;
        for (i = 0; i < hatch_boundary_paths; i++)
        {
                if (hatch_boundary_path_type_flag == 0)
                {
                        /* default type boundary */
                        for (j = 0; j < hatch_boundary_path_edges; j++)
                        {
                                switch (hatch_boundary_path_edge_type)
                                case 1: /* line type */
                                case 2: /* circular arc type */
                                case 3: /* elliptic arc type */
                                case 4: /* spline type */
                                default:
                                        fprintf (stderr,
                                          (_("Error: unsupported boundary path edge type encountered in %s ().\n")),
                                          __FUNCTION__);
                                        return (EXIT_FAILURE);
                        }
                }
                else if (hatch_boundary_path_type_flag == 2)
                {
                        /* a polyline boundary */
                        dxf_hatch_boundary_path_polyline_write_lowlevel
                        (
                                fp,
                                hatch_boundary_path_polyline_has_bulge,
                                hatch_boundary_path_polyline_is_closed,
                                hatch_boundary_path_polyline_vertices,
                                hatch_boundary_path_polyline_x0,
                                hatch_boundary_path_polyline_y0,
                                hatch_boundary_path_polyline_bulge
                        );
                }
                else
                {
                        fprintf (stderr,
                          (_("Error: unsupported boundary path type encountered in %s ().\n")),
                          __FUNCTION__);
                        return (EXIT_FAILURE);
                }
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Return the angle between two vertices on a plane (2D).
 *
 * The angle is from \c vertex_0 to \c vertex_1, positive is
 * counterclockwise (CCW).
 *
 * \return The angle value is in the range (\f$ -\pi \cdots \pi \f$) in
 * radians.
 */
double
dxf_hatch_boundary_path_polyline_vertex_angle
(
        DxfHatchBoundaryPathPolylineVertex *vertex_0,
                /*!< The first vertex (of the pair). */
        DxfHatchBoundaryPathPolylineVertex *vertex_1
                /*!< The second vertex (of the pair). */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        double x0;
        double y0;
        double x1;
        double y1;
        double dtheta;
        double theta0;
        double theta1;

        x0 = vertex_0->x0;
        y0 = vertex_0->y0;
        x1 = vertex_1->x0;
        y1 = vertex_1->y0;
        theta0 = atan2 (y0, x0);
        theta1 = atan2 (y1, x1);
        dtheta = theta1 - theta0;
        while (dtheta > M_PI)
                dtheta -= 2 * M_PI;
        while (dtheta < -M_PI)
        dtheta += 2 * M_PI;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (dtheta);
}


/*!
 * \brief Write DXF output to a file for a hatch boundary polyline
 * vertex.
 */
int
dxf_hatch_boundary_path_polyline_vertex_write
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        DxfHatchBoundaryPathPolylineVertex *vertex
                /*!< DXF hatch boundary path polyline vertex entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        fprintf (fp, " 10\n%f\n", vertex->x0);
        fprintf (fp, " 20\n%f\n", vertex->y0);
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Write DXF output to a file for a hatch boundary polyline
 * vertex.
 */
int
dxf_hatch_boundary_path_polyline_vertex_write_lowlevel
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        double x0,
                /*!< group code = 10\n
                 * X-value of vertex point. */
        double y0
                /*!< group code = 20\n
                 * Y-value of vertex point. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        fprintf (fp, " 10\n%f\n", x0);
        fprintf (fp, " 20\n%f\n", y0);
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Test if a hatch boundary polyline is closed and add the missing
 * vertex.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_polyline_close_polyline
(
        DxfHatchBoundaryPathPolyline *polyline
                /*!< DXF hatch boundary path polyline entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (polyline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () invalid pointer to polyline (NULL).\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (polyline->is_closed == 0)
        {
                /* iterate over all vertices until the last vertex,
                 * append a new vertex with values of the first vertex,
                 * and set the "is_closed" member to 1. */
                DxfHatchBoundaryPathPolylineVertex *first;
                DxfHatchBoundaryPathPolylineVertex *iter;
                DxfHatchBoundaryPathPolylineVertex *next;
                first = dxf_hatch_boundary_path_polyline_vertex_new ();
                iter = dxf_hatch_boundary_path_polyline_vertex_new ();
                next = dxf_hatch_boundary_path_polyline_vertex_new ();
                first = (DxfHatchBoundaryPathPolylineVertex *) polyline->vertices;
                iter = first;
                for (;;)
                {
                        if (iter->next == NULL)
                        {
                                next = (DxfHatchBoundaryPathPolylineVertex *) iter->next;
                                break;
                        }
                        iter = (DxfHatchBoundaryPathPolylineVertex *) iter->next;
                }
                first = (DxfHatchBoundaryPathPolylineVertex *) polyline->vertices;
                 /*! \todo How do we know what's the last id_code ?
                  * This should be taken from a global id_code counter. */
                next->id_code = iter->id_code + 1;
                next->x0 = first->x0;
                next->y0 = first->y0;
                next->next = NULL;
                /*! \todo warning: assignment from incompatible pointer type. */
                iter->next = (DxfHatchBoundaryPathPolylineVertex *) next;
                polyline->is_closed = 1;
        }
        else
        {
                /* iterate over all vertices until the last vertex,
                 * test if the values of the last are identical with the
                 * first vertex, if not: append a vertex with values of
                 * the first vertex. */
                DxfHatchBoundaryPathPolylineVertex *first;
                DxfHatchBoundaryPathPolylineVertex *iter;
                DxfHatchBoundaryPathPolylineVertex *next;
                first = dxf_hatch_boundary_path_polyline_vertex_new ();
                iter = dxf_hatch_boundary_path_polyline_vertex_new ();
                next = dxf_hatch_boundary_path_polyline_vertex_new ();
                first = (DxfHatchBoundaryPathPolylineVertex *) polyline->vertices;
                iter = first;
                for (;;)
                {
                        if (iter->next == NULL)
                        {
                                next = (DxfHatchBoundaryPathPolylineVertex *) iter->next;
                                break;
                        }
                        iter = (DxfHatchBoundaryPathPolylineVertex *) iter->next;
                }
                first = (DxfHatchBoundaryPathPolylineVertex *) polyline->vertices;
                if (iter->x0 != first->x0 && iter->y0 != first->y0)
                {
                        /* the first vertex coordinates are identical to
                         * the last vertex coordinates: do nothing and
                         * leave. */
                }
                else
                {
                        /*! \todo How do we know what's the last id_code ?
                         * This should be taken from a global id_code counter. */
                        next->id_code = iter->id_code + 1;
                        next->x0 = (double) first->x0;
                        next->y0 = first->y0;
                        next->next = NULL;
                        /*! \todo warning: assignment from incompatible pointer type. */
                        iter->next = (DxfHatchBoundaryPathPolylineVertex *) next;
                }
                /*! \todo add code here ! */
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Compute if the coordinates of a point \c p lie inside or
 * outside a DXF hatch boundary path polyline \c polyline entity.
 *
 * \author Paul Bourke <http://www.paulbourke.net/geometry/insidepoly/>\n
 * Adapted for libDXF by Bert Timmerman <bert.timmerman@xs4all.nl>
 *
 * A solution by Philippe Reverdy is to compute the sum of the angles
 * made between the test point and each pair of points making up the
 * polygon.\n
 * If this sum is (\f$ 2\pi \f$) then the point is an interior point,
 * if 0 then the point is an exterior point.\n
 * This also works for polygons with holes given the polygon is defined
 * with a path made up of coincident edges into and out of the hole as
 * is common practice in many CAD packages.\n
 *
 * \note For most of the "point-in-polygon" algorithms there is a
 * pathological case if the point being queries lies exactly on a
 * vertex.\n
 * The easiest way to cope with this is to test that as a separate
 * process and make your own decision as to whether you want to consider
 * them inside or outside.
 *
 * \note It is assumed that the polygon is simple (does not intersect
 * itself).
 *
 * \return \c result is \c TRUE if an interior point, and \c FALSE if an
 * exterior point.
 */
int
dxf_hatch_boundary_path_polyline_point_inside_polyline
(
        DxfHatchBoundaryPathPolyline *polyline,
                /*!< DXF hatch boundary path polyline entity. */
        DxfPoint *point,
                /*!< The point to be tested for. */
        int *result
                /*!< Result of the test. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (polyline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () invalid pointer to polyline (NULL).\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (point == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () invalid pointer to point (NULL).\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (polyline->is_closed != 1)
        {
                fprintf (stderr,
                  (_("ERROR in %s () polyline is not a closed polygon.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }

        DxfHatchBoundaryPathPolylineVertex *p0;
        DxfHatchBoundaryPathPolylineVertex *p1;
        DxfHatchBoundaryPathPolylineVertex *iter;
        DxfHatchBoundaryPathPolylineVertex *next;
        double angle;
        p0 = dxf_hatch_boundary_path_polyline_vertex_new ();
        p1 = dxf_hatch_boundary_path_polyline_vertex_new ();
        iter = dxf_hatch_boundary_path_polyline_vertex_new ();
        next = dxf_hatch_boundary_path_polyline_vertex_new ();
        iter = (DxfHatchBoundaryPathPolylineVertex *) polyline->vertices;
        next = (DxfHatchBoundaryPathPolylineVertex *) iter->next;
        angle = 0;
        for (;;)
        {
                if (next == NULL)
                {
                        /* iter is the last vertex, no use to continue. */
                        break;
                }
                next = (DxfHatchBoundaryPathPolylineVertex *) iter->next;
                p0->x0 = iter->x0 - point->x0;
                p0->y0 = iter->y0 - point->y0;
                p1->x0 = next->x0 - point->x0;
                p1->y0 = next->y0 - point->y0;
                angle += dxf_hatch_boundary_path_polyline_vertex_angle (iter, next);
                iter = next;
        }

        /* clean up. */
        dxf_hatch_boundary_path_polyline_vertex_free (p0);
        dxf_hatch_boundary_path_polyline_vertex_free (p1);

        if (abs (angle) < M_PI)
                result = FALSE;
        else
                /*! \todo warning: assignment makes pointer from integer without a cast. */
                result = TRUE;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Write DXF output to a file for a hatch boundary path polyline.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_polyline_write
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        DxfHatchBoundaryPathPolyline *polyline
                /*!< DXF hatch boundary path polyline entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        DxfHatchBoundaryPathPolylineVertex *iter;

        if (fp == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received an invalid file pointer (NULL).\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        if (polyline == NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () received an invalid pointer to a polyline (NULL).\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        fprintf (fp, " 72\n%d\n", polyline->has_bulge);
        fprintf (fp, " 73\n%d\n", polyline->is_closed);
        fprintf (fp, " 93\n%d\n", polyline->number_of_vertices);
        if (polyline->bulge != 0.0) fprintf (fp, " 42\n%f\n", polyline->bulge);
        /* draw hatch boundary vertices. */
        iter = dxf_hatch_boundary_path_polyline_vertex_new ();
        iter = (DxfHatchBoundaryPathPolylineVertex *) polyline->vertices;
        for (;;)
        {
                dxf_hatch_boundary_path_polyline_vertex_write
                (
                        fp,
                        iter
                );
                iter = (DxfHatchBoundaryPathPolylineVertex *) iter->next;
                if (iter == NULL)
                {
                        break;
                }
        }
        /* test for closed polyline: close with first vertex. */
        if (polyline->is_closed)
        {
                dxf_hatch_boundary_path_polyline_vertex_write
                (
                        fp,
                        (DxfHatchBoundaryPathPolylineVertex *) polyline->vertices
                );
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Write DXF output to a file for a hatch boundary path polyline.
 */
int
dxf_hatch_boundary_path_polyline_write_lowlevel
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        int has_bulge,
                /*!< group code = 72\n
                 * polyline boundary data group only. */
        int is_closed,
                /*!< group code = 73\n
                 * polyline boundary data group only. */
        int vertices,
                /*!< group code = 93\n
                 * number of polyline vertices to follow. */
        double *x0,
                /*!< group code = 10\n
                 * pointer to array of [vertices] X-values. */
        double *y0,
                /*!< group code = 20\n
                 * pointer to array of [vertices] Y-values. */
        double bulge
                /*!< group code = 42\n
                 * pointer to array of [vertices] bulge values. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;
        fprintf (fp, " 72\n%d\n", has_bulge);
        fprintf (fp, " 73\n%d\n", is_closed);
        fprintf (fp, " 93\n%d\n", vertices);
        if (bulge != 0.0) fprintf (fp, " 42\n%f\n", bulge);
        /* draw hatch boundary vertices. */
        for (i = 0; i < vertices; i++)
        {
                dxf_hatch_boundary_path_polyline_vertex_write_lowlevel
                (
                        fp,
                        x0[i],
                        y0[i]
                );
        }
        /* test for closed polyline: close with first vertex. */
        if (is_closed)
        {
                dxf_hatch_boundary_path_polyline_vertex_write_lowlevel
                (
                        fp,
                        x0[0],
                        y0[0]
                );
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Write DXF output to a file for a hatch pattern definition line
 * dash items.
 */
int
dxf_hatch_pattern_def_line_dashes_write_lowlevel
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        int dash_items,
                /*!< group code = 79\n
                 * array of number of hatch pattern definition line dash
                 * items. */
        double *dash_length
                /*!< group code = 49\n
                 * array of dash lengths for an array of hatch pattern
                 * definition lines. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (dash_items != 0)
        {
                int i;
                for (i = 0; i < dash_items; i++)
                {
                        fprintf (fp, " 49\n%f\n", dash_length[i]);
                }
        }
        else
        {
                fprintf (stderr,
                  (_("Warning: no definition line dash items found in %s () function.\n")),
                  __FUNCTION__);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Write DXF output to a file for a DXF \C HATCH pattern definition
 * lines.
 */
int
dxf_hatch_pattern_def_lines_write_lowlevel
(
        FILE *fp,
                /*!< file pointer to output file (or device). */
        int def_lines,
                /*!< group code = 78\n
                 * number of hatch pattern definition lines. */
        double *angle,
                /*!< group code = 53\n
                 * array of hatch pattern definition line angles. */
        double *x0,
                /*!< group code = 43\n
                 * array of hatch pattern line base point X-values. */
        double *y0,
                /*!< group code = 44\n
                 * array of hatch pattern line base point Y-values. */
        double *x1,
                /*!< group code = 45\n
                 * array of hatch pattern line offset point X-values. */
        double *y1,
                /*!< group code = 46\n
                 * array of hatch pattern line offset point Y-values. */
        int *dash_items,
                /*!< group code = 79\n
                 * array of number of hatch pattern definition line dash
                 * items. */
        double **dash_length
                /*!< group code = 49\n
                 * array of dash lengths for an array of hatch pattern
                 * definition lines. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        int i;
        int j;
        if (def_lines != 0)
        {
                /* draw hatch pattern definition lines */
                for (i = 0; i < def_lines; i++)
                {
                        fprintf (fp, " 53\n%f\n", angle[i]);
                        fprintf (fp, " 43\n%f\n", x0[i]);
                        fprintf (fp, " 44\n%f\n", y0[i]);
                        fprintf (fp, " 45\n%f\n", x1[i]);
                        fprintf (fp, " 46\n%f\n", y1[i]);
                        fprintf (fp, " 79\n%d\n", dash_items[i]);
                        if (!dash_items)
                        {
                                for (j = 0; j < *dash_items; j++)
                                {
                                        dxf_hatch_pattern_def_line_dashes_write_lowlevel
                                        (
                                                fp,
                                                *dash_items,
                                                *dash_length
                                        );
                                }
                        }
                }
        }
        else
        {
                fprintf (stderr,
                  (_("Warning: no definition lines found in %s () function.\n")),
                  __FUNCTION__);
        }
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH and all it's
 * data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_free
(
        DxfHatch *hatch
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (hatch->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatch was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (hatch->pattern_name);
        free (hatch->linetype);
        free (hatch->layer);
        free (hatch->def_lines);
        free (hatch->paths);
        free (hatch->seed_points);
        free (hatch);
        hatch = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH pattern and all
 * it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_pattern_free
(
        DxfHatchPattern *pattern
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * pattern entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (pattern->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchPattern was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (pattern->lines);
        free (pattern->seed_points);
        free (pattern);
        pattern = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH pattern seedpoint
 * and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_pattern_seedpoint_free
(
        DxfHatchPatternSeedPoint *seedpoint
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * pattern seedpoint entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (seedpoint->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchPattern was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (seedpoint);
        seedpoint = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH pattern
 * definition line and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_pattern_def_line_free
(
        DxfHatchPatternDefLine *def_line
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * pattern definition line entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (def_line->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchPatternDefLine was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (def_line);
        def_line = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path and
 * all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_free
(
        DxfHatchBoundaryPath *path
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (path->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPath was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (path->edges);
        free (path->polylines);
        free (path);
        path = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path
 * polyline and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_polyline_free
(
        DxfHatchBoundaryPathPolyline *polyline
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path polyline entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (polyline->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPathPolyline was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (polyline->vertices);
        free (polyline);
        polyline = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path
 * polyline vertex and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_polyline_vertex_free
(
        DxfHatchBoundaryPathPolylineVertex *vertex
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path polyline vertex entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (vertex->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPathPolylineVertex was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (vertex);
        vertex = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path
 * edge and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_free
(
        DxfHatchBoundaryPathEdge *edge
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path edge entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (edge->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPathEdge was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (edge->arcs);
        free (edge->ellipses);
        free (edge->lines);
        free (edge->splines);
        free (edge);
        edge = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path
 * edge arc and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_arc_free
(
        DxfHatchBoundaryPathEdgeArc *arc
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path edge arc entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (arc->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPathEdgeArc was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (arc);
        arc = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path
 * edge ellipse and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_ellipse_free
(
        DxfHatchBoundaryPathEdgeEllipse *ellipse
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path edge ellipse entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (ellipse->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPathEdgeEllipse was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (ellipse);
        ellipse = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path
 * edge line and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_line_free
(
        DxfHatchBoundaryPathEdgeLine *line
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path edge line entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (line->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPathEdgeLine was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (line);
        line = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path
 * edge spline and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_free
(
        DxfHatchBoundaryPathEdgeSpline *spline
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path edge spline entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (spline->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPathEdgeSpline was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (spline->control_points);
        free (spline);
        spline = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/*!
 * \brief Free the allocated memory for a DXF \c HATCH boundary path
 * edge spline control point and all it's data fields.
 *
 * \return \c EXIT_SUCCESS when done, or \c EXIT_FAILURE when an error
 * occurred.
 */
int
dxf_hatch_boundary_path_edge_spline_control_point_free
(
        DxfHatchBoundaryPathEdgeSplineCp *control_point
                /*!< Pointer to the memory occupied by the DXF \c HATCH
                 * boundary path edge spline control point entity. */
)
{
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Entering %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        if (control_point->next != NULL)
        {
                fprintf (stderr,
                  (_("ERROR in %s () pointer to next DxfHatchBoundaryPathEdgeSplineCp was not NULL.\n")),
                  __FUNCTION__);
                return (EXIT_FAILURE);
        }
        free (control_point);
        control_point = NULL;
#if DEBUG
        fprintf (stderr,
          (_("[File: %s: line: %d] Leaving %s () function.\n")),
          __FILE__, __LINE__, __FUNCTION__);
#endif
        return (EXIT_SUCCESS);
}


/* EOF */
