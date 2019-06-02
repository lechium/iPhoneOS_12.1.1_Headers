/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDDrawableInfo.h>
#import <TSReading/TSDMutableContainerInfo.h>
#import <TSReading/TSDMixing.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSDSelectionStatisticsContributor.h>

@class NSMutableArray, NSString, TSDInfoGeometry;

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor> {

	NSMutableArray* mChildInfos;
	BOOL mIsInDocument;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
+(id)groupGeometryFromChildrenInfos:(id)arg1 ;
+(id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(BOOL*)arg4 ;
+(id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 ;
-(id)copyWithContext:(id)arg1 ;
-(id)childEnumerator;
-(void)acceptVisitor:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(id)childInfos;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(BOOL)aspectRatioLocked;
-(void)setChildInfos:(id)arg1 ;
-(void)addChildInfo:(id)arg1 ;
-(void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertChildInfo:(id)arg1 below:(id)arg2 ;
-(void)insertChildInfo:(id)arg1 above:(id)arg2 ;
-(void)moveChildren:(id)arg1 toIndexes:(id)arg2 ;
-(void)removeChildInfo:(id)arg1 ;
-(void)replaceChildInfo:(id)arg1 with:(id)arg2 ;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(id)allNestedChildrenInfos;
-(id)allNestedChildrenInfosIncludingGroups;
-(id)groupedGeometryForChildInfo:(id)arg1 ;
-(void)removeAllChildrenInDocument:(BOOL)arg1 ;
-(void)processSelectedStoragesWithStatisticsController:(id)arg1 ;
-(id)onlyChild;
-(id)ungroupedGeometryForChildInfo:(id)arg1 ;
-(void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
-(void)ensureGeometryFitsChildren;
-(void)dealloc;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
@end

