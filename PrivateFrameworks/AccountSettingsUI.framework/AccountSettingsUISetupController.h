/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */



@interface AccountSettingsUISetupController : PSSetupController 
{
    unsigned int _didAlreadyPopController : 1;
    unsigned int _didAttemptFirstSyncSetup : 1;
    unsigned int _forceMailSetup : 1;
}


- (void)updateNavButtons;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (id)syncControllerSpecifierNamed:(id)arg1 account:(id)arg2;
- (void)forceMailSetup;
- (void)controller:(id)arg1 finishedSetupWithAccount:(id)arg2;
- (void)finishedAccountSetup;
- (void)_reallyFinishedAccountSetup;
- (void)didFinishTransition;

@end