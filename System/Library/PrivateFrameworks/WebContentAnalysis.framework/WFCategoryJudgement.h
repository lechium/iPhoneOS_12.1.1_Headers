/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFCategoryJudgement : NSObject {

	float score;
	long long category;

}
+(id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2 ;
-(void)setScore:(float)arg1 ;
-(float)score;
-(long long)compareByCategory:(id)arg1 ;
-(long long)compareByScore:(id)arg1 ;
-(id)description;
-(void)setCategory:(long long)arg1 ;
-(long long)category;
@end
