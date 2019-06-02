/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCSolConfiguration;

@interface FCHeadlineClusteringRules : NSObject {

	BOOL _enableOptimizedLayout;
	unsigned long long _minClusterSize;
	unsigned long long _maxClusterSize;
	unsigned long long _minIdealClusterSize;
	unsigned long long _maxIdealClusterSize;
	unsigned long long _optimizedLayoutSizeThreshold;
	unsigned long long _optimizedLayoutIncrementUnit;
	double _minSubscribedChannelRatioForUGroup;
	double _maxExpandedAutofavoriteGroupCandidateRatio;
	double _expandedAutofavoriteClusterMinSizeMultiplier;
	double _expandedAutofavoriteClusterMaxSizeMultiplier;
	double _autoFavoriteClusterMinSizeMultiplier;
	double _autoFavoriteClusterMaxSizeMultiplier;
	FCSolConfiguration* _solConfiguration;
	unsigned long long _minClusterSizeAutoFavorite;
	unsigned long long _maxClusterSizeAutoFavorite;
	unsigned long long _minIdealClusterSizeAutoFavorite;
	unsigned long long _maxIdealClusterSizeAutoFavorite;

}

@property (assign,nonatomic) unsigned long long minClusterSizeAutoFavorite;                      //@synthesize minClusterSizeAutoFavorite=_minClusterSizeAutoFavorite - In the implementation block
@property (assign,nonatomic) unsigned long long maxClusterSizeAutoFavorite;                      //@synthesize maxClusterSizeAutoFavorite=_maxClusterSizeAutoFavorite - In the implementation block
@property (assign,nonatomic) unsigned long long minIdealClusterSizeAutoFavorite;                 //@synthesize minIdealClusterSizeAutoFavorite=_minIdealClusterSizeAutoFavorite - In the implementation block
@property (assign,nonatomic) unsigned long long maxIdealClusterSizeAutoFavorite;                 //@synthesize maxIdealClusterSizeAutoFavorite=_maxIdealClusterSizeAutoFavorite - In the implementation block
@property (nonatomic,readonly) unsigned long long minClusterSize;                                //@synthesize minClusterSize=_minClusterSize - In the implementation block
@property (nonatomic,readonly) unsigned long long maxClusterSize;                                //@synthesize maxClusterSize=_maxClusterSize - In the implementation block
@property (nonatomic,readonly) unsigned long long minIdealClusterSize;                           //@synthesize minIdealClusterSize=_minIdealClusterSize - In the implementation block
@property (nonatomic,readonly) unsigned long long maxIdealClusterSize;                           //@synthesize maxIdealClusterSize=_maxIdealClusterSize - In the implementation block
@property (nonatomic,readonly) BOOL enableOptimizedLayout;                                       //@synthesize enableOptimizedLayout=_enableOptimizedLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long optimizedLayoutSizeThreshold;                  //@synthesize optimizedLayoutSizeThreshold=_optimizedLayoutSizeThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long optimizedLayoutIncrementUnit;                  //@synthesize optimizedLayoutIncrementUnit=_optimizedLayoutIncrementUnit - In the implementation block
@property (nonatomic,readonly) double minSubscribedChannelRatioForUGroup;                        //@synthesize minSubscribedChannelRatioForUGroup=_minSubscribedChannelRatioForUGroup - In the implementation block
@property (nonatomic,readonly) double maxExpandedAutofavoriteGroupCandidateRatio;                //@synthesize maxExpandedAutofavoriteGroupCandidateRatio=_maxExpandedAutofavoriteGroupCandidateRatio - In the implementation block
@property (nonatomic,readonly) double expandedAutofavoriteClusterMinSizeMultiplier;              //@synthesize expandedAutofavoriteClusterMinSizeMultiplier=_expandedAutofavoriteClusterMinSizeMultiplier - In the implementation block
@property (nonatomic,readonly) double expandedAutofavoriteClusterMaxSizeMultiplier;              //@synthesize expandedAutofavoriteClusterMaxSizeMultiplier=_expandedAutofavoriteClusterMaxSizeMultiplier - In the implementation block
@property (assign,nonatomic) double autoFavoriteClusterMinSizeMultiplier;                        //@synthesize autoFavoriteClusterMinSizeMultiplier=_autoFavoriteClusterMinSizeMultiplier - In the implementation block
@property (assign,nonatomic) double autoFavoriteClusterMaxSizeMultiplier;                        //@synthesize autoFavoriteClusterMaxSizeMultiplier=_autoFavoriteClusterMaxSizeMultiplier - In the implementation block
@property (nonatomic,retain) FCSolConfiguration * solConfiguration;                              //@synthesize solConfiguration=_solConfiguration - In the implementation block
+(id)rulesWithTreatment:(id)arg1 deviceIsiPad:(BOOL)arg2 ;
-(FCSolConfiguration *)solConfiguration;
-(unsigned long long)minIdealClusterSizeAutoFavorite;
-(unsigned long long)maxIdealClusterSizeAutoFavorite;
-(unsigned long long)maxIdealClusterSize;
-(id)initWithMinClusterSize:(unsigned long long)arg1 maxClusterSize:(unsigned long long)arg2 minIdealClusterSize:(unsigned long long)arg3 maxIdealClusterSize:(unsigned long long)arg4 minClusterSizeAutoFavorite:(unsigned long long)arg5 maxClusterSizeAutoFavorite:(unsigned long long)arg6 minIdealClusterSizeAutoFavorite:(unsigned long long)arg7 maxIdealClusterSizeAutoFavorite:(unsigned long long)arg8 enableOptimizedLayout:(BOOL)arg9 optimizedLayoutSizeThreshold:(unsigned long long)arg10 optimizedLayoutIncrementUnit:(unsigned long long)arg11 solConfiguration:(id)arg12 minSubscribedChannelRatioForUGroup:(double)arg13 maxExpandedAutofavoriteGroupCandidateRatio:(double)arg14 expandedAutofavoriteClusterMinSizeMultiplier:(double)arg15 expandedAutofavoriteClusterMaxSizeMultiplier:(double)arg16 ;
-(double)maxExpandedAutofavoriteGroupCandidateRatio;
-(double)expandedAutofavoriteClusterMinSizeMultiplier;
-(double)expandedAutofavoriteClusterMaxSizeMultiplier;
-(double)autoFavoriteClusterMinSizeMultiplier;
-(double)autoFavoriteClusterMaxSizeMultiplier;
-(unsigned long long)minClusterSizeAutoFavorite;
-(unsigned long long)maxClusterSizeAutoFavorite;
-(unsigned long long)minClusterSize;
-(unsigned long long)maxClusterSize;
-(unsigned long long)minIdealClusterSize;
-(BOOL)enableOptimizedLayout;
-(unsigned long long)optimizedLayoutSizeThreshold;
-(unsigned long long)optimizedLayoutIncrementUnit;
-(double)minSubscribedChannelRatioForUGroup;
-(void)setAutoFavoriteClusterMinSizeMultiplier:(double)arg1 ;
-(void)setAutoFavoriteClusterMaxSizeMultiplier:(double)arg1 ;
-(void)setSolConfiguration:(FCSolConfiguration *)arg1 ;
-(void)setMinClusterSizeAutoFavorite:(unsigned long long)arg1 ;
-(void)setMaxClusterSizeAutoFavorite:(unsigned long long)arg1 ;
-(void)setMinIdealClusterSizeAutoFavorite:(unsigned long long)arg1 ;
-(void)setMaxIdealClusterSizeAutoFavorite:(unsigned long long)arg1 ;
-(id)init;
@end

