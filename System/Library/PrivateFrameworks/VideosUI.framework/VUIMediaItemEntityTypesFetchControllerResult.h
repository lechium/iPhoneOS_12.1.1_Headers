/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchResponseChanges;

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject {

	long long _fetchReason;
	VUIMediaItemEntityTypesFetchResponse* _fetchResponse;
	VUIMediaItemEntityTypesFetchResponseChanges* _fetchChanges;

}

@property (assign,nonatomic) long long fetchReason;                                                   //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * fetchResponse;                    //@synthesize fetchResponse=_fetchResponse - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponseChanges * fetchChanges;              //@synthesize fetchChanges=_fetchChanges - In the implementation block
-(void)setFetchChanges:(VUIMediaItemEntityTypesFetchResponseChanges *)arg1 ;
-(VUIMediaItemEntityTypesFetchResponseChanges *)fetchChanges;
-(id)init;
-(id)description;
-(long long)fetchReason;
-(VUIMediaItemEntityTypesFetchResponse *)fetchResponse;
-(void)setFetchReason:(long long)arg1 ;
-(id)initWithFetchReason:(long long)arg1 fetchResponse:(id)arg2 ;
-(void)setFetchResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
@end

