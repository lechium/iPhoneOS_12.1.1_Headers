/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPTextStatistics : NSObject <NSCopying> {

	unsigned long long _wordCount;
	unsigned long long _charactersNoWhiteSpace;
	unsigned long long _paragraphCount;
	BOOL _isAccurate;

}

@property (assign,nonatomic) unsigned long long wordCount;                           //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) unsigned long long charactersNoWhiteSpace;              //@synthesize charactersNoWhiteSpace=_charactersNoWhiteSpace - In the implementation block
@property (assign,nonatomic) unsigned long long paragraphCount;                      //@synthesize paragraphCount=_paragraphCount - In the implementation block
@property (assign,nonatomic) BOOL isAccurate;                                        //@synthesize isAccurate=_isAccurate - In the implementation block
-(BOOL)isAccurate;
-(unsigned long long)paragraphCount;
-(unsigned long long)wordCount;
-(void)setWordCount:(unsigned long long)arg1 ;
-(void)setCharactersNoWhiteSpace:(unsigned long long)arg1 ;
-(void)setParagraphCount:(unsigned long long)arg1 ;
-(void)setIsAccurate:(BOOL)arg1 ;
-(unsigned long long)charactersNoWhiteSpace;
-(void)resetStatistics;
-(void)setTextStatistics:(id)arg1 ;
-(void)addTextStatistics:(id)arg1 ;
-(void)removeTextStatistics:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

