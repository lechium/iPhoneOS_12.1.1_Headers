/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSString;

@interface SUComposeTextFieldConfiguration : NSObject {

	UIEdgeInsets _borderInsets;
	BOOL _isRequired;
	NSString* _label;
	unsigned long long _maxLength;
	NSString* _placeholder;
	NSString* _value;

}

@property (assign,nonatomic) UIEdgeInsets borderInsets;                    //@synthesize borderInsets=_borderInsets - In the implementation block
@property (nonatomic,retain) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,retain) NSString * placeholder;                       //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;              //@synthesize isRequired=_isRequired - In the implementation block
@property (nonatomic,retain) NSString * value;                             //@synthesize value=_value - In the implementation block
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isRequired;
-(void)setRequired:(BOOL)arg1 ;
-(void)dealloc;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)placeholder;
-(NSString *)label;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
@end

