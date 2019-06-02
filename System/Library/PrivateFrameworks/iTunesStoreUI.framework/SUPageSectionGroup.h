/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface SUPageSectionGroup : NSObject <NSCopying> {

	long long _defaultSectionIndex;
	NSArray* _sections;
	long long _style;
	UIColor* _tintColor;
	long long _tintStyle;

}

@property (assign,nonatomic) long long defaultSectionIndex;              //@synthesize defaultSectionIndex=_defaultSectionIndex - In the implementation block
@property (nonatomic,retain) NSArray * sections;                         //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) long long tintStyle;                        //@synthesize tintStyle=_tintStyle - In the implementation block
-(long long)defaultSectionIndex;
-(void)setDefaultSectionIndex:(long long)arg1 ;
-(void)setTintStyle:(long long)arg1 ;
-(long long)tintStyle;
-(id)initWithSectionsDictionary:(id)arg1 ;
-(long long)_sectionStyleForString:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(UIColor *)tintColor;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
@end

