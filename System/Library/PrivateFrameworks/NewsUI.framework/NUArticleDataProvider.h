/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FCArticle;


@protocol NUArticleDataProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,readonly) FCArticle * article; 
@required
-(NSString *)articleID;
-(FCArticle *)article;
-(void)loadContextWithCompletionBlock:(/*^block*/id)arg1;

@end

