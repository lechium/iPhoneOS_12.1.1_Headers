/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSDOwningAttachment.h>
#import <TSReading/TSPCopying.h>

@class TSWPStorage, NSString;

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying> {

	TSWPStorage* _parentStorage;

}

@property (assign,nonatomic) TSWPStorage * parentStorage;                       //@synthesize parentStorage=_parentStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isDrawable; 
@property (nonatomic,readonly) BOOL isAnchored; 
@property (nonatomic,readonly) BOOL isPartitioned; 
@property (nonatomic,readonly) BOOL isAttachedToBodyText; 
@property (nonatomic,readonly) Class positionerClass; 
@property (nonatomic,readonly) BOOL isSearchable; 
@property (nonatomic,readonly) BOOL specifiesEnabledKnobMask; 
@property (nonatomic,readonly) unsigned long long enabledKnobMask; 
+(unsigned)attributeArrayKind;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(BOOL)isAttachedToBodyText;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(unsigned long long)enabledKnobMask;
-(BOOL)specifiesEnabledKnobMask;
-(BOOL)isSearchable;
-(int)elementKind;
-(TSWPStorage *)parentStorage;
-(unsigned long long)findCharIndex;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(BOOL)isDrawable;
-(BOOL)isPartitioned;
-(Class)positionerClass;
-(void)infoChanged;
-(BOOL)changesWithPageCount;
-(id)topLevelAttachment;
-(BOOL)changesWithPageNumber;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(BOOL)isAnchored;
@end

