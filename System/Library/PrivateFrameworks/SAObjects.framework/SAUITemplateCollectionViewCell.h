/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>
#import <SAObjects/SAUITemplateMonogrammable.h>

@class NSArray, NSString;

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (nonatomic,copy) NSArray * monogramName; 
@property (assign,nonatomic) BOOL sizeToFitImage; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSArray * themeImages; 
@property (nonatomic,copy) NSString * titleText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)collectionViewCellWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)collectionViewCell;
-(NSString *)titleText;
-(id)encodedClassName;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
-(NSArray *)monogramName;
-(void)setMonogramName:(NSArray *)arg1 ;
-(BOOL)sizeToFitImage;
-(void)setSizeToFitImage:(BOOL)arg1 ;
-(NSString *)subtitleText;
-(id)groupIdentifier;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
@end

