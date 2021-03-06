/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface INFSentenceContext : NSObject {

	NSNumber* _number;
	unsigned long long _gender;

}

@property (nonatomic,copy) NSNumber * number;              //@synthesize number=_number - In the implementation block
@property (assign) unsigned long long gender;              //@synthesize gender=_gender - In the implementation block
+(id)sentenceContext;
-(id)combinedWithContext:(id)arg1 ;
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
-(void)setGender:(unsigned long long)arg1 ;
-(unsigned long long)gender;
@end

