/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface HFListFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _listStyle;
	UListFormatterRef _formatter;

}

@property (assign,nonatomic) UListFormatterRef formatter;               //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) unsigned long long listStyle;              //@synthesize listStyle=_listStyle - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
-(UListFormatterRef)formatter;
-(void)setFormatter:(UListFormatterRef)arg1 ;
-(void)setListStyle:(unsigned long long)arg1 ;
-(void)_invaildateFormatter;
-(id)_formatOrListWithElements:(id)arg1 ;
-(id)_formatAndListWithElements:(id)arg1 ;
-(unsigned long long)listStyle;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
@end

