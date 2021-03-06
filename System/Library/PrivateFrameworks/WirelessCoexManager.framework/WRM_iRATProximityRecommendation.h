/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WRM_iRATProximityRecommendationLogging;

@interface WRM_iRATProximityRecommendation : NSObject {

	BOOL _linkRecommendationIsValid;
	BOOL _linkIsRecommended;
	int _RecommendationType;
	WRM_iRATProximityRecommendationLogging* _metrics;

}

@property (assign,nonatomic) int RecommendationType;                                        //@synthesize RecommendationType=_RecommendationType - In the implementation block
@property (assign,nonatomic) BOOL linkRecommendationIsValid;                                //@synthesize linkRecommendationIsValid=_linkRecommendationIsValid - In the implementation block
@property (assign,nonatomic) BOOL linkIsRecommended;                                        //@synthesize linkIsRecommended=_linkIsRecommended - In the implementation block
@property (nonatomic,retain) WRM_iRATProximityRecommendationLogging * metrics;              //@synthesize metrics=_metrics - In the implementation block
-(void)setRecommendationType:(int)arg1 ;
-(void)setLinkIsRecommended:(BOOL)arg1 ;
-(void)setLinkRecommendationIsValid:(BOOL)arg1 ;
-(int)RecommendationType;
-(BOOL)linkRecommendationIsValid;
-(BOOL)linkIsRecommended;
-(id)init;
-(void)dealloc;
-(void)setMetrics:(WRM_iRATProximityRecommendationLogging *)arg1 ;
-(WRM_iRATProximityRecommendationLogging *)metrics;
@end

