/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class RUIPage, NSString;

@interface RUIPageElement : RUIElement {

	RUIPage* _page;

}

@property (assign,nonatomic,__weak) RUIPage * page;                      //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
-(id)staticValues;
-(void)setLoading:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(RUIPage *)page;
-(void)setPage:(RUIPage *)arg1 ;
-(BOOL)isLoading;
@end

