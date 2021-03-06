/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WLKChannelDetails, NSDictionary, NSArray;

@interface WLKChannel : NSObject {

	NSString* _ID;
	WLKChannelDetails* _details;
	NSDictionary* _punchoutUrls;
	NSArray* _seasonNumbers;

}

@property (nonatomic,copy,readonly) NSString * ID;                            //@synthesize ID=_ID - In the implementation block
@property (nonatomic,copy,readonly) WLKChannelDetails * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * punchoutUrls;              //@synthesize punchoutUrls=_punchoutUrls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * seasonNumbers;                  //@synthesize seasonNumbers=_seasonNumbers - In the implementation block
+(id)channelsWithDictionaries:(id)arg1 ;
-(WLKChannelDetails *)details;
-(NSString *)ID;
-(NSDictionary *)punchoutUrls;
-(NSArray *)seasonNumbers;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end

