/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSString, PSIDateFilter;

@interface PSIParse : NSObject {

	NSArray* _tokens;
	NSString* _string;
	PSIDateFilter* _dateFilter;

}

@property (nonatomic,readonly) unsigned long long numberOfTokens; 
@property (nonatomic,copy) PSIDateFilter * dateFilter;                         //@synthesize dateFilter=_dateFilter - In the implementation block
-(unsigned long long)numberOfTokens;
-(id)tokenAtIndex:(unsigned long long)arg1 ;
-(id)parseByReplacingTokenAtIndex:(unsigned long long)arg1 withToken:(id)arg2 ;
-(PSIDateFilter *)dateFilter;
-(void)setDateFilter:(PSIDateFilter *)arg1 ;
-(id)initWithTokens:(id)arg1 fromString:(id)arg2 ;
-(void)enumerateTokensUsingBlock:(/*^block*/id)arg1 ;
-(id)descriptionWithToken:(id)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(id)parseByReplacingTokensInRange:(NSRange)arg1 withTokens:(id)arg2 ;
-(id)description;
@end

