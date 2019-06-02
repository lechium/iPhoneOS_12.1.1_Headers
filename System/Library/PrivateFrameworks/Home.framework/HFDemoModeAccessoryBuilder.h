/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@class NSString, HFRoomBuilder, HMAccessory, NSArray;

@interface HFDemoModeAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL isFavorite;
	NSString* name;
	HFRoomBuilder* room;

}

@property (nonatomic,readonly) HMAccessory * accessory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
+(Class)homeKitRepresentationClass;
-(void)setIsFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(id)_performValidation;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_lazilyUpdateFavorite;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(NSString *)originalName;
-(HMAccessory *)accessory;
-(HFRoomBuilder *)room;
-(id)accessories;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

