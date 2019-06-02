/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenDelegate;
@class TKTokenDriver, TKTokenKeychainContents, NSString;

@interface TKToken : NSObject {

	TKTokenDriver* _tokenDriver;
	id<TKTokenDelegate> _delegate;
	TKTokenKeychainContents* _keychainContents;
	NSString* _tokenID;

}

@property (retain) TKTokenKeychainContents * keychainContents;              //@synthesize keychainContents=_keychainContents - In the implementation block
@property (readonly) NSString * tokenID;                                    //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) BOOL valid; 
@property (readonly) TKTokenDriver * tokenDriver;                           //@synthesize tokenDriver=_tokenDriver - In the implementation block
@property (__weak) id<TKTokenDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
+(id)encodedObjectID:(id)arg1 ;
-(NSString *)tokenID;
-(void)terminate;
-(TKTokenDriver *)tokenDriver;
-(id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2 ;
-(id)decodedObjectID:(id)arg1 error:(id*)arg2 ;
-(TKTokenKeychainContents *)keychainContents;
-(void)setKeychainContents:(TKTokenKeychainContents *)arg1 ;
-(id)description;
-(void)setDelegate:(id<TKTokenDelegate>)arg1 ;
-(id<TKTokenDelegate>)delegate;
-(BOOL)valid;
@end

