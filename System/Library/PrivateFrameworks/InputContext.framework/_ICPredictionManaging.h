/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ICPredictionManaging <NSObject>
@required
-(void)predictedItemSelected:(id)arg1;
-(id)searchForMeCardRegions;
-(void)hibernate;
-(id)lastCachedResultWithInitialCharacters:(id)arg1;
-(id)searchForMeCardEmailAddresses;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
-(void)reset;
-(void)warmUp;

@end

