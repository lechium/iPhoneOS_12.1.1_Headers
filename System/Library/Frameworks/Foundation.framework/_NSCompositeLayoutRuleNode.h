/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSLayoutRuleNode.h>
#import <libobjc.A.dylib/_NSLayoutRuleNodeParent.h>

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode <_NSLayoutRuleNodeParent> {

	NSMutableArray* _childNodes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSArray * _childRuleNodes; 
-(id)childNodesCreatingIfNecessary;
-(void)_addChildRuleNode:(id)arg1 ;
-(void)_removeChildRuleNode:(id)arg1 ;
-(NSArray *)_childRuleNodes;
-(void)dealloc;
-(NSString *)debugDescription;
@end
