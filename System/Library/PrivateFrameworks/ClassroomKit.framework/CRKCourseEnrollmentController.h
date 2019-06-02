/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKStudentDaemonProxyObserver.h>
#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>

@protocol CRKCourseEnrollmentControllerDelegate;
@class CRKStudentDaemonProxy, CATRemoteTaskOperation, CRKSecureCodedUserDefaultsObject, NSArray, NSDictionary, NSString;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate> {

	id<CRKCourseEnrollmentControllerDelegate> mDelegate;
	CRKStudentDaemonProxy* mDaemonProxy;
	CATRemoteTaskOperation* mBrowseOperation;
	CATRemoteTaskOperation* mActiveCoursesOperation;
	CATRemoteTaskOperation* mCloudStatusSubscriptionOperation;
	CRKSecureCodedUserDefaultsObject* mStoredCourses;
	BOOL mConfigurationFetched;
	NSArray* _courses;
	NSArray* _courseInvitations;
	NSArray* _activeCourseIdentifiers;
	NSArray* _activeInstructorIdentifiers;
	NSDictionary* _observingInstructorIdentifiersByCourseIdentifiers;
	long long _cloudEnrollmentStatus;
	unsigned long long _configurationType;

}

@property (nonatomic,copy) NSArray * courses;                                                               //@synthesize courses=_courses - In the implementation block
@property (nonatomic,copy) NSArray * courseInvitations;                                                     //@synthesize courseInvitations=_courseInvitations - In the implementation block
@property (nonatomic,copy) NSArray * activeCourseIdentifiers;                                               //@synthesize activeCourseIdentifiers=_activeCourseIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * activeInstructorIdentifiers;                                           //@synthesize activeInstructorIdentifiers=_activeInstructorIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * observingInstructorIdentifiersByCourseIdentifiers;              //@synthesize observingInstructorIdentifiersByCourseIdentifiers=_observingInstructorIdentifiersByCourseIdentifiers - In the implementation block
@property (assign,nonatomic) long long cloudEnrollmentStatus;                                               //@synthesize cloudEnrollmentStatus=_cloudEnrollmentStatus - In the implementation block
@property (assign,nonatomic) unsigned long long configurationType;                                          //@synthesize configurationType=_configurationType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEphemeralMultiUser;
-(id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 ;
-(void)daemonProxyDidConnect:(id)arg1 ;
-(void)fetchStoredCourses;
-(void)daemonProxyDidDisconnect:(id)arg1 ;
-(NSArray *)courses;
-(NSArray *)courseInvitations;
-(void)fetchActiveCourses;
-(void)fetchCourses;
-(void)fetchCourseInvitations;
-(void)fetchScreenObservers;
-(void)fetchCloudEnrollmentStatus;
-(void)startLongRunningOperations;
-(void)stopLongRunningOperations;
-(void)fetchConfiguration;
-(void)screenObserversHaveChanged:(id)arg1 ;
-(void)stopBrowsingForInvitations;
-(BOOL)canBrowseForInvitations;
-(void)startBrowsingForInvitations;
-(void)fetchConfigurationTypeOperationDidFinish:(id)arg1 ;
-(void)updateInvitationBrowsingStatus;
-(void)fetchActiveCoursesOperationDidFinish:(id)arg1 ;
-(NSArray *)activeCourseIdentifiers;
-(void)setActiveCourseIdentifiers:(NSArray *)arg1 ;
-(NSArray *)activeInstructorIdentifiers;
-(void)setActiveInstructorIdentifiers:(NSArray *)arg1 ;
-(void)fetchCoursesOperationDidFinish:(id)arg1 ;
-(void)setCourses:(NSArray *)arg1 ;
-(void)storeCourses;
-(void)fetchCourseInvitationsOperationDidFinish:(id)arg1 ;
-(void)setCourseInvitations:(NSArray *)arg1 ;
-(void)fetchScreenObserversDidFinish:(id)arg1 ;
-(NSDictionary *)observingInstructorIdentifiersByCourseIdentifiers;
-(void)setObservingInstructorIdentifiersByCourseIdentifiers:(NSDictionary *)arg1 ;
-(void)fetchCloudEnrollmentStatusDidFinish:(id)arg1 ;
-(long long)cloudEnrollmentStatus;
-(void)cloudEnrollmentStatusDidChange:(long long)arg1 ;
-(void)setCloudEnrollmentStatus:(long long)arg1 ;
-(void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)courseWithIdentifier:(id)arg1 ;
-(id)invitationWithCourseIdentifier:(id)arg1 ;
-(id)coursesWithInstructorIdentifier:(id)arg1 ;
-(unsigned long long)configurationType;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
@end
