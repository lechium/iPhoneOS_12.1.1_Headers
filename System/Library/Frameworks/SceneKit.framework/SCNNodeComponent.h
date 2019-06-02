/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNNodeComponent : NSObject {

	long long type;
	id component;
	SCNNodeComponent* next;

}

@property (assign,nonatomic) long long type; 
@property (nonatomic,retain) id component; 
@property (nonatomic,retain) SCNNodeComponent * next; 
-(id)component;
-(void)setComponent:(id)arg1 ;
-(SCNNodeComponent *)next;
-(id)initWithType:(long long)arg1 component:(id)arg2 ;
-(void)setNext:(SCNNodeComponent *)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
@end

