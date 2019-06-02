/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentHeroImageManifest, NSArray;

@interface NPKPaymentProvisioningFlowControllerWelcomeStepContext : NPKPaymentProvisioningFlowStepContext {

	PKPaymentHeroImageManifest* _heroImageManifest;
	NSArray* _featuredNetworks;

}

@property (nonatomic,retain) PKPaymentHeroImageManifest * heroImageManifest;              //@synthesize heroImageManifest=_heroImageManifest - In the implementation block
@property (nonatomic,retain) NSArray * featuredNetworks;                                  //@synthesize featuredNetworks=_featuredNetworks - In the implementation block
-(void)setFeaturedNetworks:(NSArray *)arg1 ;
-(NSArray *)featuredNetworks;
-(void)setHeroImageManifest:(PKPaymentHeroImageManifest *)arg1 ;
-(PKPaymentHeroImageManifest *)heroImageManifest;
-(id)description;
@end

