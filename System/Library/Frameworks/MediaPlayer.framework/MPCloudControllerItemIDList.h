/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HSCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject {

	HSCloudItemIDList* _cloudItemIDList;

}
+(id)cloudItemIDListForPlaylist:(id)arg1 ;
-(id)HSCloudItemIDList;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
-(void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)init;
@end
