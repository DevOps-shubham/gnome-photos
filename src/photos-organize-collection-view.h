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

#ifndef PHOTOS_ORGANIZE_COLLECTION_VIEW_H
#define PHOTOS_ORGANIZE_COLLECTION_VIEW_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define PHOTOS_TYPE_ORGANIZE_COLLECTION_VIEW (photos_organize_collection_view_get_type ())

#define PHOTOS_ORGANIZE_COLLECTION_VIEW(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj), \
   PHOTOS_TYPE_ORGANIZE_COLLECTION_VIEW, PhotosOrganizeCollectionView))

#define PHOTOS_ORGANIZE_COLLECTION_VIEW_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST ((klass), \
   PHOTOS_TYPE_ORGANIZE_COLLECTION_VIEW, PhotosOrganizeCollectionViewClass))

#define PHOTOS_IS_ORGANIZE_COLLECTION_VIEW(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
   PHOTOS_TYPE_ORGANIZE_COLLECTION_VIEW))

#define PHOTOS_IS_ORGANIZE_COLLECTION_VIEW_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE ((klass), \
   PHOTOS_TYPE_ORGANIZE_COLLECTION_VIEW))

#define PHOTOS_ORGANIZE_COLLECTION_VIEW_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), \
   PHOTOS_TYPE_ORGANIZE_COLLECTION_VIEW, PhotosOrganizeCollectionViewClass))

typedef struct _PhotosOrganizeCollectionView        PhotosOrganizeCollectionView;
typedef struct _PhotosOrganizeCollectionViewClass   PhotosOrganizeCollectionViewClass;
typedef struct _PhotosOrganizeCollectionViewPrivate PhotosOrganizeCollectionViewPrivate;

struct _PhotosOrganizeCollectionView
{
  GtkTreeView parent_instance;
  PhotosOrganizeCollectionViewPrivate *priv;
};

struct _PhotosOrganizeCollectionViewClass
{
  GtkTreeViewClass parent_class;
};

GType             photos_organize_collection_view_get_type               (void) G_GNUC_CONST;

GtkWidget        *photos_organize_collection_view_new                    (void);

void              photos_organize_collection_view_add_collection         (PhotosOrganizeCollectionView *self);

G_END_DECLS

#endif /* PHOTOS_ORGANIZE_COLLECTION_VIEW_H */
