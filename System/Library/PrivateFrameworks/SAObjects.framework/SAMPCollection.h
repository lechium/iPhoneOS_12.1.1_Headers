/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity

@property (assign,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSArray * items; 
+(id)collectionWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)collection;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)editable;
@end

