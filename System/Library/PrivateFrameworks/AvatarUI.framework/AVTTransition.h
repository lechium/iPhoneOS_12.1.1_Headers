/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTTransition.h>

@protocol AVTTransition <NSObject>
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) BOOL animated; 
@property (nonatomic,readonly) id<AVTTransitionModel> model; 
@property (nonatomic,copy) id setupHandler; 
@property (nonatomic,copy) id completionHandler; 
@required
-(id)setupHandler;
-(void)setSetupHandler:(/*^block*/id)arg1;
-(long long)state;
-(void)setState:(long long)arg1;
-(void)cancel;
-(void)start;
-(id)completionHandler;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1;
-(void)setCompletionHandler:(/*^block*/id)arg1;
-(id<AVTTransitionModel>)model;

@end


@protocol AVTTransitionModel, AVTUILogger;
@class NSString;

@interface AVTTransition : NSObject <AVTTransition> {

	BOOL _animated;
	long long _state;
	id<AVTTransitionModel> _model;
	/*^block*/id _setupHandler;
	/*^block*/id _completionHandler;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                    //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL animated;                               //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) id<AVTTransitionModel> model;              //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) id setupHandler;                               //@synthesize setupHandler=_setupHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
-(id<AVTUILogger>)logger;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 setupHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 logger:(id)arg5 ;
-(void)performTransition;
-(id)setupHandler;
-(void)performCancellation;
-(void)setSetupHandler:(id)arg1 ;
-(NSString *)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cancel;
-(void)start;
-(id)completionHandler;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id<AVTTransitionModel>)model;
@end

