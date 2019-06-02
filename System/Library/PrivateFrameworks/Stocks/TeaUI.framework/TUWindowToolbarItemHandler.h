/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TUWindowToolbarItemHandler : NSObject {

	NSString* _identifier;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName; 
-(void)triggerAction;
-(id)initWithIdentifier:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(NSString *)identifier;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)imageName;
@end

