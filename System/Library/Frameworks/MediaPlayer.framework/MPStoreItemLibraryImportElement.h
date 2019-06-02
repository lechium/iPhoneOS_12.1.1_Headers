/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject {

	long long _storeItemID;
	NSDictionary* _additionalTrackMetadata;

}

@property (nonatomic,readonly) long long storeItemID;                               //@synthesize storeItemID=_storeItemID - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalTrackMetadata;              //@synthesize additionalTrackMetadata=_additionalTrackMetadata - In the implementation block
-(id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2 ;
-(id)storeItem;
-(NSDictionary *)additionalTrackMetadata;
-(long long)storeItemID;
@end
