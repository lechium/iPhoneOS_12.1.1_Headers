/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSArray, NSDictionary, NSString;

@interface NLLanguageRecognizer : NSObject {

	void* _identifier;
	NSArray* _languageConstraints;
	NSDictionary* _languageHints;

}

@property (nonatomic,copy,readonly) NSString * dominantLanguage; 
@property (nonatomic,copy) NSDictionary * languageHints; 
@property (nonatomic,copy) NSArray * languageConstraints; 
+(id)dominantLanguageForString:(id)arg1 ;
-(NSString *)dominantLanguage;
-(void)processString:(id)arg1 ;
-(void)processString:(id)arg1 range:(NSRange)arg2 ;
-(id)languageHypothesesWithMaximum:(unsigned long long)arg1 ;
-(NSDictionary *)languageHints;
-(void)setLanguageHints:(NSDictionary *)arg1 ;
-(NSArray *)languageConstraints;
-(void)setLanguageConstraints:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
@end

