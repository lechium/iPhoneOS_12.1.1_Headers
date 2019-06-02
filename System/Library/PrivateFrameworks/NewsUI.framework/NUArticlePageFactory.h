/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUArticleFactory, NUArticleHostViewControllerFactory, NUArticleActivityFactory;
@interface NUArticlePageFactory : NSObject {

	id<NUArticleFactory> _articleFactory;
	id<NUArticleHostViewControllerFactory> _articleHostViewControllerFactory;
	id<NUArticleActivityFactory> _articleActivityFactory;

}

@property (nonatomic,readonly) id<NUArticleFactory> articleFactory;                                                  //@synthesize articleFactory=_articleFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleHostViewControllerFactory> articleHostViewControllerFactory;              //@synthesize articleHostViewControllerFactory=_articleHostViewControllerFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleActivityFactory> articleActivityFactory;                                  //@synthesize articleActivityFactory=_articleActivityFactory - In the implementation block
-(id<NUArticleHostViewControllerFactory>)articleHostViewControllerFactory;
-(id<NUArticleActivityFactory>)articleActivityFactory;
-(id<NUArticleFactory>)articleFactory;
-(id)initWithArticleFactory:(id)arg1 articleActivityFactory:(id)arg2 articleHostViewControllerFactory:(id)arg3 ;
-(id)createPagesForArticleIDs:(id)arg1 ;
@end

