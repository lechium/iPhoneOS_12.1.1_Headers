/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSOrderedSet, NSPredicate;


@protocol _UIDocumentPickerDirectoryObserver <NSObject>
@property (nonatomic,retain) NSOrderedSet * staticItems; 
@property (nonatomic,readonly) BOOL afterInitialUpdate; 
@property (nonatomic,retain) NSPredicate * queryPredicate; 
@required
-(void)setStaticItems:(id)arg1;
-(NSOrderedSet *)staticItems;
-(BOOL)afterInitialUpdate;
-(NSPredicate *)queryPredicate;
-(void)setQueryPredicate:(id)arg1;

@end

