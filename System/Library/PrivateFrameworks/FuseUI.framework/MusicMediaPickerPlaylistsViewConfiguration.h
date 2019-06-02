/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryPlaylistsViewConfiguration.h>

@interface MusicMediaPickerPlaylistsViewConfiguration : MusicLibraryPlaylistsViewConfiguration {

	BOOL _picksSingleCollection;

}
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2 ;
-(void)_multipleSelectionAllowanceDidChange:(id)arg1 ;
-(void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3 ;
-(id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2 picksSingleCollection:(BOOL)arg3 ;
-(void)_picksSingleCollectionDidChange:(id)arg1 ;
-(void)_configureAccessoriesForDescriptor:(id)arg1 ;
-(void)_watchCompatibilityVersionDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

