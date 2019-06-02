/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {

	PHFetchOptions* _fetchOptions;

}
+(id)subpredicatesForFetchOptions:(id)arg1 ;
+(unsigned long long)peopleHomeUnverifiedFaceCountThreshold;
-(id)initWithFetchOptions:(id)arg1 ;
-(id)personContextNonePredicates;
-(id)personContextPeopleHomePredicate;
-(id)personContextAdditionalPredicate;
-(id)personContextDetailPredicate;
-(id)personContextOneUpPredicate;
-(id)_verifiedPredicate;
-(id)_faceCountPredicateWithMinimum:(unsigned long long)arg1 ;
-(id)_notVerifiedPredicate;
-(id)_verifiedVisiblePredicate;
-(id)_notHiddenTypePredicate;
-(id)subpredicates;
@end

