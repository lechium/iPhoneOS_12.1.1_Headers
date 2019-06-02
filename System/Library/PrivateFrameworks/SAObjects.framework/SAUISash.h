/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAUIColor, NSArray, SAUIImageResource;

@interface SAUISash : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,retain) SAUIColor * backgroundColor; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,retain) SAUIColor * textColor; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sash;
+(id)sashWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)applicationBundleIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(NSString *)title;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)backgroundColor;
-(void)setTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)textColor;
@end
