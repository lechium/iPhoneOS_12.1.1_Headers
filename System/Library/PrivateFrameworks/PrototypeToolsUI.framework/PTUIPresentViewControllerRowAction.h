/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTRowAction.h>

@interface PTUIPresentViewControllerRowAction : PTRowAction {

	/*^block*/id _viewControllerCreator;

}

@property (nonatomic,readonly) id viewControllerCreator;              //@synthesize viewControllerCreator=_viewControllerCreator - In the implementation block
+(id)actionWithViewControllerCreator:(/*^block*/id)arg1 ;
-(BOOL)deselectsRowOnSuccess;
-(/*^block*/id)defaultHandler;
-(id)viewControllerCreator;
@end
