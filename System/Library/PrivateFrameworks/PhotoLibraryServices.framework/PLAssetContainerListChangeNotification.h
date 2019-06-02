/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) id<PLAssetContainerList> assetContainerList; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumContainer> albumList; 
+(id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3 ;
-(id)_contentRelationshipName;
-(NSObject*<PLAlbumContainer>)albumList;
-(id<PLAssetContainerList>)assetContainerList;
-(void)dealloc;
-(id)userInfo;
-(id)name;
-(id)description;
@end

