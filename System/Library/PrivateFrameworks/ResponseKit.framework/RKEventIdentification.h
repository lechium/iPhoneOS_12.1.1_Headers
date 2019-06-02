/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSArray;

@interface RKEventIdentification : NSObject {

	NSArray* _tokenSequences;
	float* _probabilities;

}

@property (nonatomic,readonly) NSArray * tokenSequences;              //@synthesize tokenSequences=_tokenSequences - In the implementation block
-(id)initWithOwnedTokenSequences:(id)arg1 probabilities:(float*)arg2 ;
-(void)getTopKClassifications:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateTopKClassificationsForEachString:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(SCD_Struct_RK3)topClassification;
-(NSArray *)tokenSequences;
-(void)enumerateClassifiedTokens:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end
