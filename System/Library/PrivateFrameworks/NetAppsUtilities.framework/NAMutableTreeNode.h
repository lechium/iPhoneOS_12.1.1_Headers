/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilities/NATreeNode.h>

@class NSSet;

@interface NAMutableTreeNode : NATreeNode

@property (nonatomic,retain) id representedObject; 
@property (nonatomic,copy) NSSet * childNodes; 
-(void)addChildren:(id)arg1 ;
-(void)setChildNodes:(NSSet *)arg1 ;
-(void)removeChildrenPassingTest:(/*^block*/id)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
@end

