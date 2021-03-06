/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FCLoadableFont : NSObject <NSCopying> {

	NSString* _fontName;
	NSURL* _fontURL;

}

@property (nonatomic,copy) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,retain) NSURL * fontURL;                //@synthesize fontURL=_fontURL - In the implementation block
+(id)loadableFontWithName:(id)arg1 url:(id)arg2 ;
-(void)setFontURL:(NSURL *)arg1 ;
-(NSURL *)fontURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
@end

