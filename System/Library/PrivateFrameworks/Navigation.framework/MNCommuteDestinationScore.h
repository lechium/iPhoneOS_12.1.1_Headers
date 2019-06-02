/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, MNCommuteDestination, NSString, NSHashTable, MNCommuteDestinationSuggestion;

@interface MNCommuteDestinationScore : NSObject {

	BOOL _destinationInvalid;
	int _score;
	NSDate* _lastUpdate;
	MNCommuteDestination* _destination;
	NSString* _descriptionExtras;
	NSHashTable* _observers;

}

@property (retain) NSHashTable * observers;                                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                                         //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic,__weak) MNCommuteDestination * destination;                   //@synthesize destination=_destination - In the implementation block
@property (readonly) BOOL destinationInvalid;                                             //@synthesize destinationInvalid=_destinationInvalid - In the implementation block
@property (readonly) int score;                                                           //@synthesize score=_score - In the implementation block
@property (readonly) double weightedScore; 
@property (readonly) MNCommuteDestinationSuggestion * destinationSuggestion; 
@property (readonly) NSString * descriptionExtras;                                        //@synthesize descriptionExtras=_descriptionExtras - In the implementation block
+(id)sessionStartDateOrNow;
+(void)setSessionStartDate:(id)arg1 ;
+(id)sessionStartDate;
+(double)weight;
-(id)initWithDestination:(id)arg1 ;
-(void)lastUpdateIsNow;
-(MNCommuteDestinationSuggestion *)destinationSuggestion;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(NSString *)descriptionExtras;
-(double)weightedScore;
-(int)score;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(void)notifyObservers;
-(id)init;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(void)setDestination:(MNCommuteDestination *)arg1 ;
-(MNCommuteDestination *)destination;
-(NSDate *)lastUpdate;
@end

