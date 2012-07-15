/*
 * Photos - access, organize and share your photos on GNOME
 * Copyright © 2012 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */


#include "config.h"

#include <glib.h>

#include "photos-local-item.h"


G_DEFINE_TYPE (PhotosLocalItem, photos_local_item, PHOTOS_TYPE_BASE_ITEM);


static void
photos_local_item_init (PhotosLocalItem *self)
{
}


static void
photos_local_item_class_init (PhotosLocalItemClass *class)
{
}


PhotosBaseItem *
photos_local_item_new (TrackerSparqlCursor *cursor)
{
  return g_object_new (PHOTOS_TYPE_LOCAL_ITEM,
                       "cursor", cursor,
                       "failed-thumbnailing", FALSE,
                       "tried-thumbnailing", FALSE,
                       NULL);
}
