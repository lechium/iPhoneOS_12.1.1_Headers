/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUPaging.h>

@class NSArray, NSOrderedSet, NSString;

@interface NUPagingBlueprint : NSObject <NUPaging> {

	NSOrderedSet* _blueprintItems;

}

@property (nonatomic,retain) NSOrderedSet * blueprintItems;              //@synthesize blueprintItems=_blueprintItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NUPage> firstPage; 
@property (nonatomic,readonly) id<NUPage> lastPage; 
@property (nonatomic,readonly) NSArray * allPages; 
-(id<NUPage>)firstPage;
-(id<NUPage>)lastPage;
-(NSArray *)allPages;
-(id)pageForIdentifier:(id)arg1 ;
-(id)pageBeforeForIdentifier:(id)arg1 ;
-(id)pageAfterIdentifier:(id)arg1 ;
-(void)forEachPage:(/*^block*/id)arg1 ;
-(id)initWithPages:(id)arg1 ;
-(NSOrderedSet *)blueprintItems;
-(void)setBlueprintItems:(NSOrderedSet *)arg1 ;
@end

