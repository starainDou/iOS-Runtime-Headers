/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMMessageDispatcher, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HMMessageReceiver> {
    int _circleNotificationToken;
    BOOL _cloudDataSyncCompleted;
    BOOL _iCloudAccountActive;
    BOOL _keychainSyncEnabled;
    BOOL _keychainSyncRequiredPopShown;
    HMMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_source> *_popupTimer;
    BOOL _serverTokenAvailable;
    int _totalHomes;
    int _totalTransientPeerDevices;
    NSUUID *_uuid;
}

@property int circleNotificationToken;
@property BOOL cloudDataSyncCompleted;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL iCloudAccountActive;
@property BOOL keychainSyncEnabled;
@property BOOL keychainSyncRequiredPopShown;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(readonly) NSUUID * messageTargetUUID;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property(retain) NSObject<OS_dispatch_source> * popupTimer;
@property BOOL serverTokenAvailable;
@property(readonly) Class superclass;
@property int totalHomes;
@property int totalTransientPeerDevices;
@property(retain) NSUUID * uuid;

+ (BOOL)isWhitelistedRemoteTransportMessage:(id)arg1;

- (void).cxx_destruct;
- (void)_handleAccountStatusChanged:(id)arg1;
- (void)_handleCircleChangedNotification;
- (void)_handleRemoteAccessPeersFoundNotification:(id)arg1;
- (void)_registerForCircleChangeNotifications;
- (void)_startPopupTimer;
- (void)_stopPopupTimer;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (int)circleNotificationToken;
- (BOOL)cloudDataSyncCompleted;
- (void)dealloc;
- (BOOL)iCloudAccountActive;
- (id)initWithName:(id)arg1 messageDispatcher:(id)arg2 totalTransientPeerDevices:(unsigned int)arg3 serverTokenAvailable:(BOOL)arg4 totalHomes:(int)arg5;
- (BOOL)keychainSyncEnabled;
- (BOOL)keychainSyncRequiredPopShown;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)popupTimer;
- (void)resetConfiguration;
- (BOOL)serverTokenAvailable;
- (void)setCircleNotificationToken:(int)arg1;
- (void)setCloudDataSyncCompleted:(BOOL)arg1;
- (void)setICloudAccountActive:(BOOL)arg1;
- (void)setKeychainSyncEnabled:(BOOL)arg1;
- (void)setKeychainSyncRequiredPopShown:(BOOL)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPopupTimer:(id)arg1;
- (void)setServerTokenAvailable:(BOOL)arg1;
- (void)setTotalHomes:(int)arg1;
- (void)setTotalTransientPeerDevices:(int)arg1;
- (void)setUuid:(id)arg1;
- (BOOL)shouldCloudSyncData;
- (int)totalHomes;
- (int)totalTransientPeerDevices;
- (void)updateCloudDataSyncState:(BOOL)arg1;
- (void)updateServerTokenAvailable:(BOOL)arg1;
- (void)updateTotalHomes:(int)arg1;
- (id)uuid;

@end