/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIImageResource.h>

@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource : SAUIImageResource

@property (assign,nonatomic) BOOL backgroundNeeded; 
@property (nonatomic,copy) NSString * imageDownloadType; 
@property (nonatomic,retain) SAUIDecoratedText * monogram; 
@property (nonatomic,copy) NSString * placeholderImage; 
+(id)nanoImageResource;
+(id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)backgroundNeeded;
-(void)setBackgroundNeeded:(BOOL)arg1 ;
-(NSString *)imageDownloadType;
-(void)setImageDownloadType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)monogram;
-(void)setMonogram:(SAUIDecoratedText *)arg1 ;
-(NSString *)placeholderImage;
-(void)setPlaceholderImage:(NSString *)arg1 ;
@end

