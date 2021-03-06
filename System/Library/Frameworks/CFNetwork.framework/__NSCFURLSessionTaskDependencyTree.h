/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskDependencyTree.h>

@class NSURL, NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode;

@interface __NSCFURLSessionTaskDependencyTree : NSURLSessionTaskDependencyTree {

	NSURL* _mainDocumentURL;
	NSMutableDictionary* _dependencies;
	__NSCFURLSessionTaskDependencyTreeNode* _effectiveTree;

}
+(id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2 ;
-(id)mainDocumentURL;
-(void)setMainDocumentURL:(id)arg1 ;
-(void)set_dependencies:(id)arg1 ;
-(void)set_effectiveTree:(id)arg1 ;
-(id)_effectiveTree;
-(id)_dependencies;
-(void)dealloc;
@end

