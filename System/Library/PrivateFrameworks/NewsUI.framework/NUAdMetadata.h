/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXPrerollAdMetadata.h>

@class NSString;

@interface NUAdMetadata : NSObject <SXPrerollAdMetadata> {

	NSString* _adImpressionIdentifier;
	NSString* _adCampaignId;
	NSString* _adLineId;
	NSString* _adCreativeId;

}

@property (nonatomic,readonly) NSString * adImpressionIdentifier;              //@synthesize adImpressionIdentifier=_adImpressionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * adCampaignId;                        //@synthesize adCampaignId=_adCampaignId - In the implementation block
@property (nonatomic,readonly) NSString * adLineId;                            //@synthesize adLineId=_adLineId - In the implementation block
@property (nonatomic,readonly) NSString * adCreativeId;                        //@synthesize adCreativeId=_adCreativeId - In the implementation block
-(NSString *)adCreativeId;
-(NSString *)adCampaignId;
-(NSString *)adLineId;
-(NSString *)adImpressionIdentifier;
-(id)initWithAdImpressionIdentifier:(id)arg1 adCampaignId:(id)arg2 adLineId:(id)arg3 adCreativeId:(id)arg4 ;
@end
