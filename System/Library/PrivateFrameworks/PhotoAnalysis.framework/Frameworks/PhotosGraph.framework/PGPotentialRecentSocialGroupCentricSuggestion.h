/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface PGPotentialRecentSocialGroupCentricSuggestion : NSObject {

	float _weight;
	NSArray* _personLocalIdentifiers;
	NSArray* _personWeights;
	NSArray* _momentLocalIdentifiers;
	NSArray* _assets;
	NSDate* _notSeenSinceDate;

}

@property (nonatomic,readonly) NSArray * personLocalIdentifiers;              //@synthesize personLocalIdentifiers=_personLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * personWeights;                       //@synthesize personWeights=_personWeights - In the implementation block
@property (nonatomic,readonly) NSArray * momentLocalIdentifiers;              //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) float weight;                                  //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSDate * notSeenSinceDate;                       //@synthesize notSeenSinceDate=_notSeenSinceDate - In the implementation block
-(NSArray *)momentLocalIdentifiers;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(NSArray *)personLocalIdentifiers;
-(NSDate *)notSeenSinceDate;
-(id)initWithPersonLocalIdentifiers:(id)arg1 personWeights:(id)arg2 momentLocalIdentifiers:(id)arg3 weight:(float)arg4 notSeenSinceDate:(id)arg5 ;
-(NSArray *)personWeights;
-(void)setNotSeenSinceDate:(NSDate *)arg1 ;
-(float)weight;
@end

