/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSURL, NSString;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (nonatomic,copy) NSURL * articleURL; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * title; 
+(id)microblogSearchResultNews;
+(id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(id)encodedClassName;
-(NSURL *)articleURL;
-(void)setArticleURL:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

