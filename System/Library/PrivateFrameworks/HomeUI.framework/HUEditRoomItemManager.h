/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HFZoneModule, HFRoomBuilder;

@interface HUEditRoomItemManager : HFItemManager {

	HFStaticItem* _nameItem;
	HFStaticItem* _cameraItem;
	HFStaticItem* _chooseWallpaperItem;
	HFStaticItem* _wallpaperThumbnailItem;
	HFStaticItem* _wallpaperPickerItem;
	HFStaticItem* _removeItem;
	HFZoneModule* _zoneModule;
	HFRoomBuilder* _roomBuilder;

}

@property (nonatomic,retain) HFRoomBuilder * roomBuilder;                        //@synthesize roomBuilder=_roomBuilder - In the implementation block
@property (nonatomic,retain) HFStaticItem * nameItem;                            //@synthesize nameItem=_nameItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * cameraItem;                          //@synthesize cameraItem=_cameraItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * chooseWallpaperItem;                 //@synthesize chooseWallpaperItem=_chooseWallpaperItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * wallpaperThumbnailItem;              //@synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * wallpaperPickerItem;                 //@synthesize wallpaperPickerItem=_wallpaperPickerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * removeItem;                          //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFZoneModule * zoneModule;                          //@synthesize zoneModule=_zoneModule - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)setRemoveItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)removeItem;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithRoomBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setNameItem:(HFStaticItem *)arg1 ;
-(void)setCameraItem:(HFStaticItem *)arg1 ;
-(void)setChooseWallpaperItem:(HFStaticItem *)arg1 ;
-(void)setWallpaperThumbnailItem:(HFStaticItem *)arg1 ;
-(void)setWallpaperPickerItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)nameItem;
-(HFStaticItem *)cameraItem;
-(HFStaticItem *)chooseWallpaperItem;
-(HFStaticItem *)wallpaperThumbnailItem;
-(HFStaticItem *)wallpaperPickerItem;
-(BOOL)_canDeleteRoom;
-(HFZoneModule *)zoneModule;
-(HFRoomBuilder *)roomBuilder;
-(void)setZoneModule:(HFZoneModule *)arg1 ;
-(void)setRoomBuilder:(HFRoomBuilder *)arg1 ;
@end

