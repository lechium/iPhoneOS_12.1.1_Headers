/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSearchWatchListRequest : WLKRequest {

	NSDictionary* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
@end
